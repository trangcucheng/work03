// Nhap A(n,n) voi n khong gioi han truoc, kiem tra A co phai ma tran don vi hay khong

#include <stdio.h>
#include <conio.h>

int main()
{
    int n,a[50][50],i,j,h,dem1=0,dem2=0;
    printf("Nhap n: "); scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("Nhap phan tu a[%d][%d]= ",i,j);
            scanf("%d",&h);
            a[i][j]=h;
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (i==j && a[i][j]==1) dem1++;
            if (i!=j && a[i][j]==0) dem2++;
        }
    }
    if (dem1==n && dem2== n*(n-1)) printf("\nMa tran vua nhap LA ma tran don vi!");
    else printf("\nMa tran vua nhap KHONG LA ma tran don vi!");
    getch();
    return 0;
}
