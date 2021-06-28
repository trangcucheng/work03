// nhap mang co n dong, m cot, nhap phan tu x, in ra nhung vi tri x xuat hien

#include <stdio.h>
#include <conio.h>

int main()
{
    int n,m,x,i,j,h,tempt=0,a[50][50];
    printf("Nhap so dong: "); scanf("%d",&n);
    printf("Nhap so cot: "); scanf("%d",&m);
    printf("Nhap x: "); scanf("%d",&x);
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf("Nhap phan tu a[%d][%d]= ",i,j);
            scanf("%d",&h);
            a[i][j]=h;
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            if (a[i][j]==x)
            {
                tempt++;
                printf("\n%d xuat hien lan thu %d o vi tri dong thu %d, cot thu %d",x,tempt,i,j);
            }
        }
    }
    if (tempt==0) printf("\n%x khong xuat hien trong mang vua nhap!",x);
    getch();
    return 0;
}
