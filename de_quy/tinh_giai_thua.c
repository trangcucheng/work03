#include "stdio.h"
#include "conio.h"

long TinhGiaiThua(int n)
{
   if  (n==0) return 1;
   else return n*TinhGiaiThua(n-1);
}

int main()
{
    int n;
    printf("nhap n: "); scanf("%d",&n);
    printf("Ket qua: %ld",TinhGiaiThua(n));
    getch();
    return 0;
}
