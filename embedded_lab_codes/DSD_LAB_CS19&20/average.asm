ORG 300H        
DB 1,2,3,4,5,6,7,8,9,10
ORG 0000H       
MOV DPTR, #0300H
MOV R7, #0AH    
MOV A, #00H     
MOV R0, #00H    
MOV R6,#00H     

LOOP:
		MOV A, R0       
		MOVC A,@A+DPTR  
		ADD A, R6       
		MOV R6,A        
		INC R0          
		DJNZ R7, LOOP   

MOV A, R6
MOV B, R0
DIV AB
MOV R6, A
MOV P0, R6
END