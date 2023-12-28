.model small
.stack 100h 
.data
     ms1 db 'Nhap day ky tu: $'
     ms2 db 10, 13, 'Day ky tu vua nhap: $' 
     ms3 db 10, 13, 'chu hoa: $'
     s db 100 dup(?)
     s1 db 200 dup(?)
     
.code
     main proc
          mov ax, @data
          mov ds, ax
          
          mov ah, 9
          lea dx, ms1
          int 21h
           
          mov bx, 0    ; i=0
nhaptiep:          
          mov ah, 1
          int 21h
          cmp al, 13
          je enter
          ; luu ky tu vao s
          mov s[bx], al 
          sub al, 32
          mov s1[bx], al
          inc bx          ; o nho tiep theo
          jmp nhaptiep
enter:	    
          mov cx, bx
		mov ah, 9
		lea dx, ms2
		int 21h					   
		
		mov bx, 0
		mov ah, 2		  
intiep:          
          mov dl, s[bx]
          int 21h
          inc bx
          cmp bx, cx
          jl intiep  
          
          mov ah, 9
          lea dx, ms3
          int 21h
             
          mov bx, 0
          mov ah, 2   
intiep1:
          mov dl, s1[bx]
          int 21h
          inc bx
          cmp bx, cx
          jl intiep1
          
          mov ah, 4ch
          int 21h
     main endp
end main
                

