.model small
.stack 100h
.data
    ms1 db  'Nhap day ky tu: $'
    ms2 db  10, 13, 'So chu a: $'
    s   db  100 dup (?)
    ms3 db  10, 13, 'xau da nhap: $'
   
.code
    main proc
        mov ax, @data
        mov ds, ax
       
        mov bx, 0
        mov cl, 0      ; bien dem so ky tu
       
        mov ah, 9
        lea dx, ms1
        int 21h
nhaptiep:       
        mov ah, 1
        int 21h
        cmp al, 13
        je  enter
        cmp al, 'a'
        jne chuhoa
        sub al, 32   ; chuyen thanh chu hoa
        inc cl       ; dem
chuhoa:
        mov s[bx], al
        inc bx
        jmp nhaptiep
       
enter:  mov ah, 9
        lea dx, ms2
        int 21h
        
        ; hien so chu a
        mov ah, 2
        mov dl, cl
        add dl, 48
        int 21h
        
        ; hien lai xau da viet hoa chu a
        add s[bx], '$'
        mov ah, 9
        lea dx, ms3
        int 21h
        lea dx, s
        int 21h 
        
        mov ah, 4ch
        int 21h
        main endp
    end main