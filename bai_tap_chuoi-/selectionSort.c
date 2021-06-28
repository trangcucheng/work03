#include <stdio.h>

void swap(int *x,int *y)
{
    int tmp=*x;
    *x=*y;
    *y=tmp;
}

void input(int n, int arr[])
{
    for (int i=0;i<n;i++)
    {
        printf("arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
int main()
{
    int n,arr[50],k;
    printf("Nhap so phan tu: "); scanf("%d",&n);
    input(n,arr);
    for (int i=0;i<n-1;i++)
    {
        k=i;
        for (int j=k+1;j<n;j++)
        {
            if (arr[j]<arr[k]) k=j;
        }
        if (k!=i) swap(&arr[k],&arr[i]);
    }
    for (int i=0;i<n;i++) printf("%d\t",arr[i]);
    return 0;
}
