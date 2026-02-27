# extern int operators_asm(int a, int b, int c, int d);

.section .text
.global operators_asm

operators_asm:
    # TODO: You have to implement the operators function with assembly language

    blt a0, a1, b2
b1:  #if a >= b
    and a0, a0, a1
    or a2, a2, a3
    sub a0, a0, a2
    j end

b2:  #if a < b
    xor a0, a0, a1
    sll a2, a2, a3
    add a0, a0, a2
    
end:  
    ret
