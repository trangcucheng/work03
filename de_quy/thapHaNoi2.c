#include "stdio.h"
#include "conio.h"


void Chuyen(int n, char a, char b, char c)
{
    printf("\nChuyen dia thu %d tu chong %c sang chong %c",n,a,c);
}

void CachChuyen(int n,char a,char b,char c)
{
    if (n==1) Chuyen(n,a,b,c);
    else
    {
        CachChuyen(n-1,a,c,b);
        Chuyen(n,a,b,c);
        CachChuyen(n-1,b,a,c);
    }
}

int main()
{
    int n;
    char a='A';
    char b='B';
    char c='C';
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("Quy uoc cac dia danh so theo thu tu tu tren xuong duoi!");
    CachChuyen(n,a,b,c);
    getch();
    return 0;
}
