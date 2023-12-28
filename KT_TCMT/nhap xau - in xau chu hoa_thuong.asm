.model small
.stack 100h
.data
     ms1 db 'Nhap xau:$'
     ms2 db 10,13, 'Xau vua nhap la:$'
     ms3 db 10,13, 'Xau kieu chu hoa la:$'
     ms4 db 10,13, 'Xau kieu chu thuong la:$'
     s1 db 100 dup(?)
     s2 db 100 dup(?)
     s3 db 100 dup(?)
     
.code
     main proc

     mov ax,@data
     mov ds, ax

     mov bx,0
     mov si,0
     mov di,0
     ;hien ms1
     mov ah,9
     lea dx,ms1
     int 21h
nhaptiep:
     mov ah,1
     int 21h
     cmp al,13
     je enter
     mov s1[bx],al
     inc bx
     cmp al,90
     jle chuhoa
     cmp al,97
     jge chuthuong
     jmp nhaptiep
chuhoa:
     mov s2[si], al
     inc si
     jmp nhaptiep
chuthuong:
     mov s3[di], al
     inc di
     jmp nhaptiep
enter:
     ; add s1[bx],'$'
     ; add s2[si],'$'
     ; add s3[di],'$'

     mov ah,9
     lea dx,ms2
     int 21h
     mov s1[bx],'$'
     lea dx,s1
     int 21h

     mov ah,9
     lea dx, ms3
     int 21h
     mov s2[si],'$'
     lea dx,s2
     int 21h

     mov ah,9
     lea dx,ms4
     int 21h
     mov s3[di],'$'
     lea dx,s3
     int 21h

     mov ah,4ch
     int 21h
     main endp
end main