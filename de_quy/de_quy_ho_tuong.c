#include "stdio.h"
#include "conio.h"

long X(int n);
long Y(int n);

long Y(int n)
{
    if (n==0) return 1;
    else return n*n*X(n-1)+Y(n-1);
}
 long X(int n)
 {
     if (n==0) return 1;
     else return X(n-1)+Y(n-1);
 }

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("\nX(%d)=%ld",n,X(n));
    printf("\nY(%d)=%ld",n,Y(n));
    getch();
    return 0;
}
