#include <stdio.h>
#include <conio.h>

void Xuat(int a[], int n)
{
	int i;
	for (i=1;i<=n;i++) printf("%d    ",a[i]);
	printf("\n");
}

void NhiPhan(int a[], int n,int i)
{
	int j;
	for (j=0;j<2;j++)
	{
		a[i]=j;
		if (i==n) Xuat(a,n);
		else NhiPhan(a,n,i+1);
	}
}
int main()
{
	int n,a[20];
	printf("Nhap n: ");
	scanf("%d",&n);
	NhiPhan(a,n,1);
	getch();
	return 0;
}
