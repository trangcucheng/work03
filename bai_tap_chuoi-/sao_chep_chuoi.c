#include "stdio.h"

int main()
{
    char s1[30],s2[30];
    int i=0;
    printf("Nhap chuoi: ");
    gets(s1);
    while (s1[i]!='\0')
    {
        s2[i]=s1[i];
        i++;
    }
    printf("Chuoi sau khi sao chep: %s",s2);
    getch();
    return 0;
}
