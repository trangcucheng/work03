#include "stdio.h"
#include "conio.h"
#include "string.h"

int main()
{
    char s[50];
    char *p;
    int dem=0;
    printf("Nhap chuoi: ");
    gets(s);
    int a=strlen(s);
    p=s;
    while(*p!='\0')
    {
        dem++;
        p++;
    }
    printf("So ki tu cua chuoi: %d ///   %d",dem,a);
    getch();
    return 0;
}
