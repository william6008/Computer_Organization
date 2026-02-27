# extern int max_element_asm(int *arr, int size);

.section .text
.global max_element_asm

max_element_asm:
    # TODO: You have to implement the max_element function with assembly language

    #a0 = arr, a1 = size
    lw t0, 0(a0)  #ans = arr[0]
    li t1, 0 #int i = 0

loop:
    lw t2, 0(a0)
    bge t2, t0, b1
    j endloop
b1:                       #if arr[i] > ans
    mv t0, t2             #t0 = tw   

endloop:
    addi a0, a0, 4
    addi t1, t1, 1
    blt t1, a1, loop

end:
    mv a0, t0
    ret
