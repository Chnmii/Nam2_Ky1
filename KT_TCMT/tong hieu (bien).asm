.model small
.stack 100h
.data
     ; khai bao du lieu
     ms1 db 'Nhap so thu nhat: $'
     ms2 db 10, 13, 'Nhap so thu 2: $'
     ms3 db 10, 13, 'Tong la: $'
     ms4 db 10, 13, 'Hieu la: $'
     so1 db ?
     so2 db ?
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
          sub al, 48 ; doi thanh so
          
          ; luu tam vao thanh ghi bl
          mov so1, al

          ; hien ms2
          mov ah, 9
          lea dx, ms2
          int 21h

          ; nhap so thu 2
          mov ah, 1
          int 21h
          sub al, 48 ; doi thanh so
          
          ; luu tam vao thanh ghi bh
          mov so2, al

          ; hien ms3
          mov ah, 9
          lea dx, ms3
          int 21h

          mov al, so2
          add so1, al ; tong luu trong bl
          ; hien tong

          mov ah, 2
          mov dl, so1
          add dl, 48 ; doi thanh ky tu
          int 21h

          ; hien ms4
          mov ah, 9
          lea dx, ms4
          int 21h

          mov al, so2
          sub so1, al
          sub so1, al

          ; hien hieu
          mov ah, 2
          mov dl, so1
          add dl, 48 ; doi thanh ky tu
          int 21h

          ; ket thuc chuong trinh

          mov ah, 4ch
          int 21h

     main endp
end main



