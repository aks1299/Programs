;NAME-DIVYA DARSAN PATRA
;REGD NO-2141016212
;EXPERIMENT 4 OBJ 2
MOV AX,0000H
MOV DS,AX
MOV CH,04H
L1: MOV CL,04H
    MOV SI,3000H
L2: MOV AL,[SI]
    MOV AH,[SI+1]
    CMP AL,AH
    JNC L3
    JZ L3
    MOV [SI],AH
    MOV [SI+1],AL
L3: INC SI
    DEC CL
    JNZ L2
    DEC CH
    JNZ L1
    HLT