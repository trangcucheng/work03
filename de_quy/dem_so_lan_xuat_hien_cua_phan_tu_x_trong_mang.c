#include "stdio.h"
#include "conio.h"

void Nhap(int a[], int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d",&a[i]);
    }
}

int Sum(int a[], int n)
{
    if (n==1) return a[0];
    else return a[n-1]+Sum(a,n-1);
}
 int main()
 {
     int a[50],n;
     printf("Nhap so phan tu cua mang: ");
     scanf("%d",&n);
     Nhap(a,n);
     printf("Tong cac phan tu cua mang: %d", Sum(a,n));
     getch();
     return 0;
 }

