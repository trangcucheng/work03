#include "stdio.h"
#include "string.h"
#include "conio.h"

int main()
{
    char s1[50],s2[50];
    int i=0,n,j;
    printf("Nhap chuoi: ");
    gets(s1);
    n=strlen(s1);
    j=n-1;
    while (s1[i]!='\0')
    {
        s2[j]=s1[i];
        j--;
        i++;
    }
    printf("Ket qua: %s",s2);
    getch();
    return 0;

}
