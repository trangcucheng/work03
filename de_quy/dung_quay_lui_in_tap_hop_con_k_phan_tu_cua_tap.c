#include "stdio.h"
#include "conio.h"

void Xuat(int a[], int k)
{
    for (int i=1;i<=k;i++) printf("%d     ",a[i]);
    printf("\n");
}

void TapHopCon(int a[], int n,int k, int i)
{
    for (int j=a[i-1]+1;j<=n-k+i;j++)
    {
        a[i]=j;
        if (i==k) Xuat(a,k);
        else TapHopCon(a,n,k,i+1);
    }
}
int main()
{
    int n,k,a[20]={};
    printf("Nhap n: "); scanf("%d",&n);
    printf("Nhap k: "); scanf("%d",&k);
    TapHopCon(a,n,k,1);
    getch();
    return 0;
}
