#include "stdio.h"
#include "string.h"
#define Max 50

void InChuoi(char s[]);
void BaoLoi();

void InChuoi(char s[])
{
    if (strlen(s)<=Max) puts(s);
    else BaoLoi();
}
void BaoLoi()
{
    InChuoi("Chuoi vuot qua do dai quy dinh!");
}
int main()
{
    char s[Max];
    printf("Enter your sentence: ");
    gets(s);
    InChuoi(s);
    getch();
    return 0;
}
