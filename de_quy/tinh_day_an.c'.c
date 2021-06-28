#include "stdio.h"
#include "conio.h"
#define A 4

long Tinhan(int n)
{
    if (n==0) return A;
    if (n%2==0) return (n/2)*Tinhan(n/2);
    else return (3*n+1)*Tinhan(n-1);
}
int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("Ket qua: %ld", Tinhan(n));
    getch();
    return 0;
}
