#include <stdio.h>
#include <conio.h>

void Tao(int a[], int n)
{
	int i;
    for ( i=1;i<=n;i++)
    {
        a[i]=i;
    }
}

void In(int a[], int k)
{
	int i;
	for ( i=1;i<=k;i++)
	{
		printf("%d   ",a[i]);
	}
	printf("\n");
}

void ChinhHop(int a[], int n, int k, int i)
{
	int t,j;
	for ( j=i;j<=n;j++)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
		if (j<k) ChinhHop(a,n,k,i+1);
		else In(a,k);
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
}

int main()
{
	int n,k,a[50];
	printf("Nhap n,k: "); scanf("%d%d",&n,&k);
	Tao(a,n);
	ChinhHop(a,n,k,1);
	getch();
	return 0;
}


