#include "stdio.h"
#include "conio.h"

float Tong(int n)
{
    if (n==0) return 1;
    else return (1/(float)(2*n+1)+Tong(n-1));
}
int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("Ket qua: %.5f", Tong(n));
    getch();
    return 0;
}
