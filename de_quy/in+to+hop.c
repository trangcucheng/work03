#include "stdio.h"
#include "conio.h"

int a[50],n,k;
void Nhap()
{
    printf("Nhap n,k: ");
    scanf("%d%d",&n,&k);
}
void Sinh(int *ok)
{
    int i=k;
    while (i>0 && a[i]==n+i-k) i--;
    a[i]++;
    if (i>0)
    {
        for (int j=i+1;j<=n;j++)
            a[j]=a[i]+j-i;
    }
    else *ok=0;
}
void Xuat()
{
     for (int i=1;i<=n;i++) printf("%d  ",a[i]);
     printf("\n");
}
void Next(int ok)
{
    for (int i=1;i<=n;i++) a[i]=i;
    while (ok)
    {
        Xuat();
        Sinh(ok);
    }
}

int main()
{
    int ok=1;
    Nhap();
    Next(ok);
    return 0;
}
