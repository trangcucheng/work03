#include "stdio.h"
#include "conio.h"
#include "string.h"

int main()
{
    char str1[50],c,str2[50];
    int i,n,vt;
    printf("Nhap chuoi: ");
    gets(str1);
    printf("Nhap vi tri: ");
    scanf("%d",&vt);
    printf("Nhap so ki tu can xoa: ");
    scanf("%d",&n);
    strcpy(str2,str1+vt+n);
    str1[vt]='\0';
    strcat(str1,str2);
    printf("Ket qua: ");
    puts(str1);
    getch();
    return 0;
}

