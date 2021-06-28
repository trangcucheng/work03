#include "stdio.h"
#include "conio.h"
#include "string.h"

int main()
{
    char str1[50],str2[50],*s;
    int i,n;
    printf("Nhap Chuoi: ");
    gets(str1);
    printf("Tach chuoi tu: ");
    gets(str2);
    s=strstr(str1,str2);
    if (s=='\0') printf("Chuoi nhap vao khong chua chuoi can tim!");
    else printf("Chuoi ket qua: ");
    puts(s);
    getch();
    return 0;
}

