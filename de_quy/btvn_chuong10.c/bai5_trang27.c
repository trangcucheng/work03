// nhan ma tran

#include <stdio.h>
#include <conio.h>

int main()
{
    int n,m,i,j;
    float a[50][50],b[50][50],c[50][50],h;
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
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            c[i][j]=0;
            for (int k=0;k<m;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("\n\tKet qua: C= \n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++) printf("%f   ",c[i][j]);
        printf("\n");
    }
    getch();
    return 0;
}
