.model small    ;tiny, large..
.stack 100h
.data
    ; khai bao du lieu
   
.code
    main    proc
        ; cac cau lenh    
        
        ;nhap 1 ky tu tu ban phim
        mov ah, 1
        int 21h
                
        ; luu tam ky tu
        mov bl, al
        
        ; hien dau cach ra man hinh   
        mov ah, 2
        mov dl, 32
        int 21h
        
        ; xuong dong va ve dau dong
        mov ah, 2
        mov dl, 13
        int 21h
        
        mov ah, 2
        mov dl, 10
        int 21h
               
        ; hien chu a
        mov ah, 2  
        mov dl, bl
        int 21h
        
        ; ket thuc chuong trinh
        mov ah, 4ch
        int 21h
        
    main endp
    
    end main
    
     