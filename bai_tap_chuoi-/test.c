#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char str[50],*s;
    printf("Nhap chuoi"); gets(str);
    s=strstr(str,"hoc");
    printf("Chuoi trich ra: ");
    puts(s);
    getch();
    return 0;
}
