#include "stdio.h"
#include "conio.h"
#define MAX 30

void Nhap( int *p, int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("Nhap phan tu thu %d: ",i);
        scanf("%d",p);
        p++;
    }
}
 void In(int *p, int n)
 {
     int i;
     for (i=n-1;i>=0;i--)
     {
         printf("Phan tu thu %d cua mang la: %d\n",i,*p);
         p--;
     }
 }
int main()
{
    int n,a[MAX],*p;
    printf("Nhap so luong phan tu cua mang: "); scanf("%d",&n);
    Nhap(a,n);
    printf("Ket qua:\n");
    In(&a[n-1],n);
    getch();
    return 0;
}
