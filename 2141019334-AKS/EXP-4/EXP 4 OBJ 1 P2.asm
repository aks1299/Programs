;NAME- RISHAV KUMAR BHADANI
;REGD- 2141002078
;EXPERIMENT 4 OBJ 1 P2
MOV AX,0000H
MOV DS,AX
MOV SI,3000H
MOV DI,3030H
MOV CL,[SI]
MOV CH,00H
INC SI
MOV AL,[SI]
DEC CX
L1: INC SI
    MOV BL,[SI]
    CMP AL,BL
    JNC L2
    L2: LOOP L1
    MOV [DI],AL
    HLT  