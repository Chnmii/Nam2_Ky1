.model small
.stack 100h
.data 
     ms1 db 'Tu A->Z: $'
     ms2 db 10, 13, 'Nguoc lai: $'
.code
     main proc  
          mov ax, @data
          mov ds, ax
          
          mov ah, 9
          lea dx, ms1
          int 21h
          
          mov ah, 2
          mov dl, 'A'
back:     int 21h                   
          inc dl
          cmp dl, 'Z'
          jle back
          
          mov ah, 9
          lea dx, ms2
          int 21h
          ;mov ah, 2
          ;mov dl, 10
          ;int 21h
          ;mov dl, 13
          ;int 21h
          
          mov ah, 2
          mov dl, 'Z'
back1:    int 21h
          dec dl
          cmp dl, 'A'
          jge back1
          
          mov ah, 4ch
          int 21h
     main endp
end main
     
