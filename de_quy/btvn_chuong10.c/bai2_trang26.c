// nhap mang co n dong, m cot kieu nguyen, tim phan tu lon nhat, nho nhat

#include <stdio.h>
#include <conio.h>

int main()
{
    int n,m,i,j,h;
    int a[10][10];
    int max,min;
    printf("Nhap so dong: "); scanf("%d",&n);
    printf("Nhap so cot: "); scanf("%d",&m);
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
         printf("Nhap phan tu a[%d][%d]: ",i,j);
         scanf("%d",&h);
         a[i][j]=h;
        }
    }
    max=min=a[0][0];
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
        if (a[i][j]>max) max=a[i][j];
        else if (a[i][j]<min) min=a[i][j];
        }
    }
    printf("\nPhan tu lon nhat la %d, phan tu nho nhat la %d",max,min);
    getch();
    return 0;
}
