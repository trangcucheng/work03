#include "stdio.h"
#include "conio.h"

int TimMax(int a[], int n)
{
    if (n==1) return a[0];
    if (a[n-1]> TimMax(a,n-1)) return a[n-1];
    else TimMax(a,n-1);
}
int main()
{
    int n, a[50];
    printf("Nhap so phan tu: ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf("Nhap phan tu thu %d: ",i);
        scanf("%d",&a[i]);
    }
    printf("Ket qua: %d", TimMax(a,n));
    getch();
    return 0;
}
