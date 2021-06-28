#include "stdio.h"
#include "conio.h"
#include "string.h"

int main()
{
    char str[100],num[100];
    int i,n,j=0;
    printf("Nhap Chuoi: ");
    gets(str);
    n=strlen(str);
    for (i=0;i<n;i++)
    {
        if (str[i]<=57 && str[i]>= 48)
        {
            num[j]=str[i];
            j++;
        }
    }
    printf("Cac ki tu so: ");
    puts(num);
    getch();
    return 0;
}

