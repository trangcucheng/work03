#include "stdio.h"
#include "conio.h"

long Tinh(int n)
{
    if (n==0) return 1;
    else
    {
        long ret=0;
        for (int i=0;i<n;i++)
        {
           ret=ret+(n-i)*(n-i)*Tinh(i);
        }
        return ret;
    }
}
int main()
{
    int n;
    printf("Nhap n: "); scanf("%d",&n);
    printf("Ket qua: %ld",Tinh(n));
    getch();
    return 0;
}
