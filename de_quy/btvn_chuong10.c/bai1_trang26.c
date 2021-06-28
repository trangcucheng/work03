// Nhap mang co n phan tu, in ra so lon nhat, nho nhat

#include <stdio.h>
#include <conio.h>

int main()
{
    int n,i;
    printf("Nhap n: "); scanf("%d",&n);
    int a[n];
    for ( i=0;i<n;i++)
    {
        printf("Nhap phan tu thu %d: ",i+1);
        scanf("%d",&a[i]);
    }
    int max,min;
    max=min=a[0];
    for (i=1;i<n;i++)
    {
        if (a[i]>max) max=a[i];
        else if (a[i]<min) min=a[i];
    }
    printf("\nPhan tu lon nhat la %d, phan tu nho nhat la %d",max,min);
    getch();
    return 0;
}
