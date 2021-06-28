#include <stdio.h>

void input(int n, int arr[])
{
    for (int i=0;i<n;i++)
    {
        printf("arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}

void insertSort(int n, int x[])
{
    int j;
    for (int i=1;i<n;i++)
    {
        int tmp=x[i];
        for (j=i-1;j>=0;j--)
        {
            if (x[j]>tmp) x[j+1]=x[j];
        }
        x[j+1]=tmp;
    }
}

int main()
{
    int n, x[50];
    printf("Nhap so phan tu: ");scanf("%d",&n);
    input(n,x);
    insertSort(n,x);
    for (int i=0;i<n;i++) printf("%d\t",x[i]);
    return 0;
}
