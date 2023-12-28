.model small
.stack 100h
.data  
     ; khai bao du lieu 
     ms1 db 'Nhap mot ky tu: $'
     ms2 db 10, 13, 'Ky tu vua nhap la: $'
.code
     main proc 
          mov ax, @data
          mov ds, ax
          
          ; cac cau lenh
          ; hien xau ms1
          mov ah, 9
          mov dx, offset ms1
          int 21h
          
          ; nhap ky tu 
          mov ah, 1
          int 21h
          
          ; luu tam vao thanh ghi bl 
          mov bl, al
          
          ; xuong dong
;          mov ah, 2
;          mov dl, 10
;          int 21h
;          mov dl, 13
;          int 21h

          ; hien ms2
          mov ah, 9
          lea dx, ms2
          int 21h
          
          ; hien ky tu ra man hinh
          mov ah, 2
          mov dl, bl
          int 21h
          
          
          
          ; ket thuc chuong trinh
          
          
          mov ah, 4ch
          int 21h
          
     main endp
end main
