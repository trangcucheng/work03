#include "stdio.h"
#include "conio.h"
#include "string.h"

int main()
{
    char s[50],c;
    int n,i,dem=0;
    printf("Nhap Chuoi: ");
    gets(s);
    printf("Nhap Ki Tu Can Tim: ");
    scanf("%c",&c);
    n=strlen(s);
    printf("Ki tu can tim o nhung tu co vi tri: \n");
    for (i=0;i<n;i++)
    {
        if (s[i]==' ') dem++;
        else if (s[i]==c) printf("%d   ",dem+1);
    }
    getch();
    return 0;
}
