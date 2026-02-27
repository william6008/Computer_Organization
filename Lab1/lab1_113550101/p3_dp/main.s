# extern void dp_asm(int *arr, int n, int m);

.section .text
.global dp_asm

dp_asm:
    # TODO: You have to implement dynamic programming with assembly code (fill the dp_array)
    # HINT: You might need to use "slli(shift left)" to implement multiplication
    # HINT: You might need to be careful of calculating the memory address you store in your register

#a0 = arr, a1 = n, a2 = m

li t0, 1
sw t0, 0(a0)

mv t4, a0  #idx = a0
slli t5, a2, 2

li t0, 0 #int i = 0

loop1:
li t1, 0 #int j = 0

loop2:
    beq t4, a0, endloop2     #if id == 0 -> continue
    
    lw t2, 0(t4)   
    li t3, -1      
    beq t2, t3, endloop2    #if arr[id] == -1 -> continue
    sw zero, 0(t4)          #arr[id] = 0

#if1 start  
    bge zero, t0, if1_end   #if i > 0
    sub t2, t4, t5
    li t3, -1
    lw t2, 0(t2)           #
    beq t2, t3, if1_end    #if arr[id - m] != -1

if1:
    lw t3, 0(t4)
    add t3, t3, t2
    sw t3, 0(t4)

if1_end:

#if2 start
    bge zero, t1, if2_end
    addi t2, t4, -4
    li t3, -1
    lw t2, 0(t2)
    beq t2, t3, if2_end

if2:
    lw t3, 0(t4)
    add t3, t3, t2
    sw t3, 0(t4)

if2_end:

endloop2:
    addi t1, t1, 1
    addi t4, t4, 4
    blt t1, a2, loop2
endloop1:
    addi t0, t0, 1
    blt t0, a1, loop1

end:
    addi t4, t4, -4
    lw a0, 0(t4)
    ret
