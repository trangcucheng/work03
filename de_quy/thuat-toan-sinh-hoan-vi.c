#include "stdio.h"
#include "conio.h"

void In(int a[], int n)
{
    for (int i=1;i<=n;i++) printf("%d   ",a[i]);
    printf("\n");
}

void SinhHoanVi(int a[],int n)
{
    int i=n-1;
    while (i>0 && a[i]>a[i+1]) i--;
    if (i>0)
    {
        int k=n;
        while (a[i]>a[k]) k--;
        int t=a[i]; a[i]=a[k];a[k]=t;
        int r=i+1,s=n;
        while (r<=s)
        {
                int h=a[r]; a[r]=a[s]; a[s]=h;
                r++;s--;
        }
        In(a,n);
     }
     else return;
     SinhHoanVi(a,n);
}

int main()
{
    int n;
    printf("Nhap n: "); scanf("%d",&n);
    int a[n];
    for (int i=1;i<=n;i++) a[i]=i;
    In(a,n);
    SinhHoanVi(a,n);
    getch();
    return 0;
}
