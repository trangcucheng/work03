// Sử dụng quay lui in dãy nhị phân
#include<stdio.h>
#include<conio.h>

void In(int x[], int n)
{
	int j;
    for ( j=0;j<n;j++) printf("%d   ",x[j]);
    printf("\n");
}

void NhiPhan(int x[], int n, int i)
{
	int j;
    for ( j=0;j<2;j++)
    {
        x[i]=j;
        if (i==n-1) In(x,n);
        else NhiPhan(x,n,i+1);
    }
}

int main()
{
    int n,x[20];
    printf("Nhap n : ");
    scanf("%d", &n);
    printf("\n\n");
    NhiPhan(x,n,0);
    getch();
    return 0;
}
