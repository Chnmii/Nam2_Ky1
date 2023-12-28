.model small
.stack 100h
.data 
     ms1 db 'nhap: $'
     ms2 db 10, 13, 'Hien nguoc lai: $'

.code
     main proc
          mov ax, @data
          mov ds, ax
          
          mov ah, 9
          lea dx, ms1
          int 21h
          
          mov cl, 0      ; xoa bien dem
          mov ah, 1

nhaptiep:          
          mov ah, 1
          int 21h
          cmp al, 13
          je enter
          push    ax
          inc cl         ; tang bien dem
          jmp nhaptiep

enter:          
          mov ah, 9
          lea dx, ms2
          int 21h
          
          mov ch, 0
          mov ah, 2 
intiep:
          pop dx
          int 21h
          loop    intiep
          
          mov ah, 4ch
          int 21h 
          
          main endp
     end main


