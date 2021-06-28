#include "stdio.h"
#include "conio.h"
#include "string.h"

int main()
{
    char str1[50],c,str2[50];
    int i,n,j=0;
    printf("Nhap Chuoi: ");
    gets(str1);
    printf("Nhap ki tu: ");
    scanf("%c",&c);
    n=strlen(str1);
    for (i=0;i<n;i++)
    {
        if (str1[i]!=c)
        {
          str2[j]=str1[i];
          j++;
        }
    }
    str2[j]='\0';
    printf("Chuoi ket qua: ");
    puts(str2);
    getch();
    return 0;
}

