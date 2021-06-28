//22.Nhập vào chuỗi str, chuỗi cần chèn strInsert và vị trí cần chèn vt. Hăy chèn chuỗi strInser vào chuỗi str tại vị trí vt.
#include "stdio.h"
#include "conio.h"
#include "string.h"

int main()
{
    char str1[100],str2[50],strIN[50];
    int i,n,vt;
    printf("Nhap chuoi ban dau: ");
    gets(str1);
    printf("Nhap chuoi can chen: ");
    gets(strIN);
    printf("Nhap vi tri can chen: ");
    scanf("%d",&vt);
    strcpy(str2,str1+vt-1);
    str1[vt-1]='\0';
    strcat(str1,strIN);
    strcat(str1,str2);
    printf("Ket qua: ");
    puts(str1);
    getch();
    return 0;
}


