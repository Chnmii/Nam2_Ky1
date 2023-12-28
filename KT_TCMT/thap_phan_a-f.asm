.model small
.stack 100h 
.data
     ms1 db 'nhap 1 ky tu tu a-f: $'
     ms2 db 10, 13, 'so thap phan: $'
     ms3 db 10, 13, 'nhap lai: $'     
.code
     main proc 
          mov ax, @data
          mov ds, ax
          
          
          mov ah, 9
          lea dx, ms1
          int 21h
          
          mov ah, 1
          int 21h
       
          cmp al, 'a'
          jl  chuhoa
          cmp al, 'f'
          jg  nhapsai
          ;jl  chuhoa
          sub al, 49
          jmp hien
       
     chuhoa:
        cmp al, 'F'
        jg  nhapsai
        cmp al, 'A'
        jl  nhapsai
        sub al, 17
       
     hien:       
        mov bl, al
       
        mov ah, 9
        lea dx, ms2
        int 21h
       
        mov ah, 2
        mov dl, '1'
        int 21h
       
       
        mov dl, bl
        int 21h
        jmp kt
        
     nhapsai:
        mov ah, 9
        lea dx, ms3
        int 21h
        
     kt:       
        mov ah, 4ch
        int 21h
       
        main endp
    end main