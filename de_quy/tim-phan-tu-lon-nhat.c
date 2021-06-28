#include "stdio.h"
#include "conio.h"

void Nhap(int n, int a[])
{
    for (int i=0;i<n;i++)
    {
        printf("phan tu thu %d: ", i+1);
        scanf("%d",a[i]);
    }
}

int PhanTuMax(int n, int a[])
{

}
int main()
{
    int n, a[50];
    printf("Nhap n: "); scanf("%d",&n);
    Nhap(n,a);
}
