ORG 0000
MOV R1,#40H
MOV R3,#04H
DEC R3
MOV 06H,R3
LOOP1 : MOV 02H,03H
MOV B,@R1
MOV 00H,01H
INC R0
LOOP2: MOV A,R0
CJNE A,B,CHECK
SJMP CONTINUE
CHECK: JNC CONTINUE
MOV @R0,B
MOV @R1,A
MOV B,@R1
CONTINUE:INC R0
DJNZ R2,LOOP2
INC R1
DJNZ R3, LOOP1
MOV A,#3FH
ADD A,R6
MOV R0,A
MOV P1,@R0
SJMP $
END