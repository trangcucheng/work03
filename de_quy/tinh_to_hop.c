#include "stdio.h"
#include "conio.h"

int ToHop(int n, int k)
{
    if (k==0 || n==k) return 1;
    else return ToHop(n-1,k)+ToHop(n-1,k-1);
}
int main()
{
    int n,k;
    printf("Nhap n,k: ");
    scanf("%d%d",&n,&k);
    printf("Ket qua: %d", ToHop(n,k));
    getch();
    return 0;
}
