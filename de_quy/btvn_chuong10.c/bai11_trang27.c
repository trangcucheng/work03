// Nhap 2 ma tran thuc, kiem tra xem co phai la chuyen vi khong

#include <stdio.h>
#include <conio.h>

int main()
{
    int n,m,i,j;
    float a[50][50],b[50][50],h;
    printf("Nhap n: "); scanf("%d",&n);
    printf("Nhap m: "); scanf("%d",&m);
    printf("\n\tNhap ma tran A:\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf("Nhap phan tu a[%d][%d]=",i,j);
            scanf("%f",&h);
            a[i][j]=h;
        }
    }
    printf("\n\tNhap ma tran B:\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("Nhap phan tu b[%d][%d]=",i,j);
            scanf("%f",&h);
            b[i][j]=h;
        }
    }
    int count=0;
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            if (a[i][j]==b[j][i]) count++;
        }
    }
    if (count==n*m) printf("\nDay la hai ma tran chuyen vi!");
    else printf("\nDay KHONG la hai ma tran chuyen vi!");
    getch();
    return 0;
}
