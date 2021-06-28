#include <stdio.h>
#include <conio.h>

void Nhap(int arr[][50], int m, int n)
{
    int i,j,h;
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("Nhap phan tu [%d][%d]: ",i,j);
            scanf("%d",&h);
            arr[i][j]=h;
        }
    }
}

void In(int arr[][50], int m, int n)
{
    int i,j;
    for (i=0;i<m;i++)
    {
        for (int j=0;j<n;j++) printf("%d   ",arr[i][j]);
        printf("\n");
    }
}

void NhanMaTran(int arr1[][50], int arr2[][50], int arr3[][50], int m1, int n1, int n2)
{
    int i,j,k;
    for (i=0;i<m1;i++)
    {
        for (j=0;j<n2;j++)
        {
            arr3[i][j]=0;
            for (k=0;k<n1;k++) arr3[i][j]+=arr1[i][k]*arr2[k][j];
        }
    }
}

int Ktra(int arr[][50], int m)
{
    int count1=0,count2=0;
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<m;j++)
        {
                if (arr[i][j]==0) count1++;
                if (arr[i][j]==1) count2++;
        }
    }
    if (count1==m && count2==(m*m-1)) return 1;
    else return 0;
}

int main()
{
    int arr1[50][50],arr2[50][50], m1,m2,n1,n2,arr3[50][50];
    printf("Nhap so hang cua ma tran thu nhat: "); scanf("%d",&m1);
    printf("Nhap so cot cua ma tran thu nhat: "); scanf("%d",&n1);
    printf("Nhap so hang cua ma tran thu hai: "); scanf("%d",&m2);
    printf("Nhap so cot cua ma tran thu hai: "); scanf("%d",&n2);
    printf("\nNhap ma tran thu nhat:\n");
    Nhap(arr1,m1,n1);
    printf("\nNhap ma tran thu hai:\n");
    Nhap(arr2,m2,n2);
    printf("\nMa tran thu nhat:\n");
    In(arr1,m1,n1);
    if (m1==n1)
    {
        if (Ktra(arr1,m1)==1) printf("Ma tran thu nhat la ma tran don vi!\n");
        else printf("Ma tran thu nhat khong phai la ma tran don vi!\n");
    }
    printf("\nMa tran thu hai:\n");
    In(arr2,m2,n2);
    if (Ktra(arr2,m2)==1) printf("Ma tran thu hai la ma tran don vi!\n");
    else printf("Ma tran thu hai khong phai la ma tran don vi!\n");
    printf("\nTich hai ma tran la:\n");
    NhanMaTran(arr1,arr2,arr3,m1,n1,n2);
    In(arr3,m1,n2);
    if (Ktra(arr3,m1)==1) printf("\nHai ma tran la nghich dao cua nhau!");
    else printf("Hai ma tran khong phai la nghich dao cua nhau!\n");
    getch();
    return 0;
}
// vi du cua thay dung con tro
void NhapMaTran( int *mt, int hang, int cot)
{
    printf("Nhap ma tran:\n");
    for (int i=0;i<hang;i++)
    {
        for (int j=);j<cot;j++)
            scanf("%d",(mt+i*cot)+j);
    }
}
void InMT(int *mt, int hang, int cot )
{
    printf("In ma tran: \n");
    for (int i=0;i<hang;i++)
    {
        for (int j=0;j<cot;j++)
        {
            printf("%d   ", *(mt+i*cot)+j);
        }
        printf("\n");
    }
}

int main()
{
    int m,n,p;
    printf("Nhao m,n,p: "); scanf("%d%d%d",&m,&n,&p);
    int a[m];
    int b[m][n];
    NhapMaTran(a,1,m);
    InMT(a,1,m);
    NhapMaTran(&b[0][0],m,n); // hoac NhapMaTran((int *)b,m,n)
    InMT(&b[0][0], m, n); // hoac InMT((int *)b,m,n)

}
