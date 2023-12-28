.model small  
.stack 100h
.data
    ms1 db "ham 9$"
.code
main proc
     mov ax, @data
     mov ds, ax
     
     ; 1: nhap 1 ky tu tu bp luu vao al
     mov ah, 1
     int 21h

     ; 2: xuat ra 1 ky tu
     mov ah, 2
     mov dl, al  ; chuyen gtri tu thanh al sang dl va xuat ra mh
     int 21h

     ; 9: hien thi ra man hinh chuoi ky tu
     mov ah, 9
     lea dx, ms1   ; chuyen vao thanh ghi dx va xuat a mh
     int 21h
     
     ; add: ham cong ko nho
     mov al, 10
     add al, 1
     
     ; adc: ham cong co nho
     ; sub: ham tru
     sub al, 5
     
     ; ja  nhay khi lon lon  - jna: nhay khi ko lon hon
     ; jb           nho      - jnb:             nho
     ; je           bang     ...
     ; jc           le          ...
     ; jmp          ko dieu kien   ...
     
     

