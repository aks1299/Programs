;NAME-BISWAJIT BEHERA
;REGDNO-2141002042
;EXPERIMENT 1 OBJ 5
MOV AX,0000H
MOV DS,AX
MOV SI,2000H
MOV BX,0500H
MOV AX,[SI,BX]
MOV CX,[SI+BX+02H]
ADD AX,CX
MOV [SI+BX+04H],AX
HLT