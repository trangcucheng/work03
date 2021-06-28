#include "stdio.h"
#include "conio.h"

void In(int a[], int k)
{
    for (int i=1;i<=k;i++) printf("%d   ", a[i]);
    printf("\n");
}

void SinhToHop(int a[], int k, int n)
{
    int i;
    for (i=k;i>0;i--)
    {
        if (a[i]!=n+i-k) break;
    }
    a[i]++;
    if (i>0)
    {
     for (int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
     In(a,k);
    }
    else return;
    SinhToHop(a,k,n);
}
int main()
{
    int n,k,a[50];
    printf("Nhap n: "); scanf("%d",&n);
    printf("Nhap k: "); scanf("%d",&k);
    for (int i=1;i<=n;i++) a[i]=i;
    In(a,k);
    SinhToHop(a,k,n);
    getch();
    return 0;
}
