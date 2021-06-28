#include "stdio.h"
#include "conio.h"

void CachChuyen(int n, char a, char c)
{
    printf("Chuyen dia thu %d tu cot %c sang cot %c\n", n,a,c);
}
void  Chuyen(int n, char a, char b, char c)
{
    if (n==1) CachChuyen(1,a,c);
    else
    {
        Chuyen(n-1,a,c,b);
        CachChuyen(n,a,c);
        Chuyen(n-1,b,a,c);
    }
}
int main()
{
    int n;
    char a='A', b='B', c='C';
    printf("Nhap so dia: ");
    scanf("%d",&n);
    printf("Quy uoc danh so dia tu 1(nho nhat, tren cung) den n(lon nhat, duoi cung)\n\n ");
    Chuyen(n,a,b,c);
    getch();
    return 0;
}
