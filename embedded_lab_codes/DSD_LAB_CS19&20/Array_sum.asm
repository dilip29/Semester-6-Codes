ORG 0000h
        LJMP main
 ORG 0040h
 main: MOV R0,#0A0h             ; Initializing base address location where array is stored
  MOV R1,#0Ah              ; Number of elements in array
  MOV R2,#00h
  MOV A,R1                 ; Storing number of elements in array
  MOV R3,A
  loop: MOV A,@ R0       ; Coping value from memory location at which R0 is pointing
   ADD A,R2
   MOV R2,A         ; Sum is stored in R2 register
   INC R0
   DJNZ R1, loop
  MOV B,R3                 ; Moving number of elements to register B
  MOV A,R2                 ; Moving Sum all elements to register A
  DIV AB                   ; Finding average
  MOV R4,A                 ; Storing the result in R4 register
END