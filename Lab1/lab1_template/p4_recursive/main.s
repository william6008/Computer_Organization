# extern int binary_search_asm(int arr[], int left, int right, int target);

.section .text
.global binary_search_asm

binary_search_asm:
    # TODO: You have to implement binary search with assembly language
    # HINT: You might need to use "jal(jump and link)" to finish the task

    #a0 = arr, a1 = left, a2 = right, a3 = target
    addi sp, sp, -20
    sw ra, 0(sp)
    sw a0, 4(sp)
    sw a1, 8(sp)
    sw a2, 12(sp)
    sw a3, 16(sp)

    bge a2, a1, end_if_1

if_1:
    addi a0, zero, -1
    addi sp, sp, 20
    jr ra

end_if_1:
    sub t0, a2, a1
    srli t0, t0, 1            #t0 = mid
    add t0, t0, a1
    slli t1, t0, 2
    add t1, a0, t1
    lw t1, 0(t1)               #t1 = arr[mid]
    bne t1, a3, end_if_2

if_2:
    add a0, zero, t0
    addi sp, sp, 20
    jr ra

end_if_2:
    bge a3, t1, end_if_3

if_3:
    addi a2, t0, -1
    jal binary_search_asm
    lw ra, 0(sp)
    addi sp, sp, 20
    jr ra


end_if_3:

else: 
    addi a1, t0, 1
    jal binary_search_asm
    lw ra, 0(sp)
    addi sp, sp, 20
    jr ra

    