#include "stdio.h"
#include "conio.h"

int Tong(int n)
{
    if (n==0) return 0;
    else return (n+Tong(n-1));
}
int main()
{
    int n,sum;
    printf("Nhap so n: ");
    scanf("%d",&n);
    printf("Ket qua: %d",Tong(n));
    getch();
    return 0;
}

