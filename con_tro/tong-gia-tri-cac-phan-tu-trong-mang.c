#include "stdio.h"
#include "conio.h"

void NhapMang(int a[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("Nhap phan tu thu %d: ",i+1);
        scanf("%d",&a[i]);
    }
}

int Tong(int *ptr, int n)
{
    int i;
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=*ptr;
        ptr++;
    }
    return sum;
}
int main()
{
    int n,i,a[50],*ptr;
    printf("Nhap so phan tu cua mang: "); scanf("%d",&n);
    NhapMang(a,n);
    ptr=a;
    /*for (i=0;i<n;i++)
    {
      sum+=*ptr;
      *ptr++;
    }*/
    int s=Tong(ptr,n);
    printf("Ket qua: %d",s);
    getch();
    return 0;
}
