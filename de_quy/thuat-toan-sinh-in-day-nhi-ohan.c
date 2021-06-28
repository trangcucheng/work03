#include <stdio.h>
#include <conio.h>

void InMang(int a[], int n)
{
    for (int i=0;i<n;i++) printf("%d    ", a[i]);
    printf("\n");
}
int main()
{
    int n;
    printf("Nhap n: "); scanf("%d", &n);
    int a[n];
    for (int i=0;i<n;i++) a[i]=0;
    InMang(a,n);
    for (int i=n-1;i>=0;i--)
    {
        if (a[i]==0)
        {
            a[i]=1;
            for (int j=i+1;j<n;j++) a[j]=0;
            InMang(a,n);
            i=n;
        }
    }
    getch();
    return 0;
}
