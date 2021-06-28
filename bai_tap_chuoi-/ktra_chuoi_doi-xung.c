#include "stdio.h"
#include "conio.h"
#include "string.h"

int main()
{
    char str1[50],str2[50];
    int i,n;
    printf("Nhap Chuoi: ");
    gets(str1);
    for (i=0;i<n;i++)
    {
        if (str1[i]==' ') break;
    }
    int vt1=i;
    for (i=n-1;i>=0;i--)
    {
        if (str1[i]==' ') break;
    }
    int vt2=i;
    strcpy(str2,str1+vt2+1);// chuoi 2 co tu cuoi
    str1[vt2]='\0'; // chuoi 1 khong con tu cuoi
    strcat(str2,str1+vt1); //chuoi 2 co chua tu thu 2 den tu cuoi
    str1[vt1]='\0'; // chuoi 1 chi con tu dau
    strcat(str2," ");
    strcat(str2,str1);
    printf("Chuoi ket qua: ");
    puts(str2);
    getch();
    return 0;
}

