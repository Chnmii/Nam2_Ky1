.model small
.stack 100h
.data
    ms1 db 'Nhap n: $'
    ms2 db 10, 13, 'Tong la: $' 
.code
     main proc                 
          mov ax, @data
          mov ds, ax
          
          mov ah, 9
          lea dx, ms1
          int 21h
          
          mov ah, 1
          int 21h
          
          sub al, 48     ; doi thanh so
          
          mov cl, al
          mov bl, 0
          mov al, 1
     congtiep:
          add bl, al     ; cat vao cl chua n 
          inc al
          cmp al, cl
          jle congtiep
          
          ; in ket qua
          mov ah, 9
          lea dx, ms2
          int 21h
          
          mov ah, 2
          ;mov dl, 10
          ;int 21h
          ;mov dl, 13
          ;int 21h
          mov dl, bl
          add dl, 48
          int 21h
          
          mov ah, 4ch
          int 21h
     main endp
end main
          
          