.model small
.stack 100h 
.data
     ms1 db 'Nhap day ky tu: $'
     ms2 db 10, 13, 'Day ky tu vua nhap: $'
     s db 100 dup(?) 
     a db 0
     
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
          inc bx          ; o nho tiep theo
          jmp nhaptiep
enter:	  
		mov cx, bx	; chua so dem
		mov ah, 9
		lea dx, ms2
		int 21h					   
		
		;mov s[bx], '$'
		;mov ah, 9
		;lea dx, s
		;int 21h
		
		mov bx, 0		 ; de chay tu dau
		mov ah, 2		  
		
intiep:          
          mov dl, s[bx]
          int 21h
          inc bx
          cmp bx, cx  
          jl intiep  
          
          mov ah, 4ch
          int 21h
     main endp
end main
                

