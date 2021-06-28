#include "stdio.h"
#include "conio.h"
#include "string.h"

int main()
{
    char str[50];
    int i=1,n;
    printf("Nhap Chuoi: ");
    gets(str);
    n=strlen(str);
    strlwr(str);
    if (str[0]>=97 && str[0]<=122)
                {
                    str[0]=str[0]-32;
                }
    for (i=1;i<n;i++)
    {
        if (str[i]==' ')
        {
            if (str[i+1]>=97 && str[i+1]<=122)
                {
                    str[i+1]=str[i+1]-32;
                }
        }
    }
    printf("Chuoi ket qua: ");
    puts(str);
    getch();
    return 0;
}

