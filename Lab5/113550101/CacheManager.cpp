#include "CacheManager.h"
#include <math.h>

// This is an example of direct-mapped cache manager implementation with block size 4 bytes.
// Note: This is ONLY a template. You MUST modify it to 2-way set associative, 
// block size 16 bytes, and LRU policy to pass the lab.

CacheManager::CacheManager(Memory *memory, Cache *cache){
    this->memory = memory;
    this->cache = cache;
    size = cache->get_size();

    // [Example] Set block size to 4. You MUST change this to 16.
    cache->set_block_size(16); 

    mru.assign(cache->get_len() / 2, 0);
    
    // [Example] Tag bits for direct-mapped. Needs recalculation for 2-way.
    tag_bits = 32 - ((int)log2(cache->get_len()) - 1) - 4;
};

CacheManager::~CacheManager(){

};

std::tuple<unsigned, unsigned, unsigned> CacheManager::directed_map(unsigned int addr){
    // [Example] Logic for block size = 4
    unsigned int index_bit = int(log2(cache->get_len()) - 1);
    unsigned int index = (addr >> 4) % (cache->get_len() / 2); 
    unsigned int tag = addr >> index_bit >> 4;
    
    unsigned int offset = addr % 16;
    return {index, tag, offset};
}

unsigned int* CacheManager::find(unsigned int addr){
    // Check if addr is in cache, return pointer to the data if hit, else nullptr.
    auto [index, tag, offset] = directed_map(addr);
    int word_addr = offset / 4;
    if((*cache)[2 * index + 0].tag == tag) {
        mru[index] = 0;
        return &((*cache)[2 * index + 0][word_addr]);
    }
    else if ((*cache)[2 * index + 1].tag == tag) {
        mru[index] = 1;
        return &((*cache)[2 * index + 1][word_addr]);
    }
    else
        return nullptr;
}

unsigned int CacheManager::read(unsigned int addr){
    // Read data from cache, if miss, load data from memory to cache
    unsigned int* value_ptr = find(addr);
    if(value_ptr != nullptr) {
        return *value_ptr; // Cache Hit
    } else {
        // Cache Miss
        auto [index, tag, offset] = directed_map(addr);
        int word_addr = offset / 4;
        int target = 1 - mru[index];

        // Update Metadata
        (*cache)[2 * index + target].tag = tag;
        
        // Fetch from memory and store in cache
        int addr_head = addr - offset;
        for (int i = 0; i < 4; i++) {
            (*cache)[2 * index + target][i] = memory->read(addr_head + 4 * i);
        }
        
        mru[index] = target;
        return (*cache)[2 * index + target][word_addr];
    }
};

void CacheManager::write(unsigned int addr, unsigned value){
    // Write data to cache, if miss, load data from memory to cache
    unsigned int* value_ptr = find(addr);
    
    if(value_ptr != nullptr) {
        // Write Hit: update both cache and memory (Write-through example)
        *value_ptr = value;
    } 
    else {
        // Write Miss: Write-allocate policy
        // You should treat this as a MISS and load the block into cache
        read(addr);
        auto [index, tag, offset] = directed_map(addr);
        int word_addr = offset / 4;

        int target = mru[index];
        (*cache)[2 * index + target].tag = tag;
        (*cache)[2 * index + target][word_addr] = value; // In reality, you should load the whole block first
    }
    
    // Always sync with memory for simplicity in this example
    memory->write(addr, value);
};
