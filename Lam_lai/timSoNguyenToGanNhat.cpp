// cho mot day a cac so nguyen, nhap vao x tim so nguyen to gan x nhat thuoc day a
#include <stdio.h>
#include <conio.h>
#include <math.h>

// ham kiem tra so nguyen to
int Ktra(int n)
{
	int dem,i;
	if (n<=1) return 0;
	else 
	{
		dem=0;
		for (i=1;i<=n;i++)
		{
			if (n%i==0) dem++;
		}
		if (dem==2) return 1;
		else return 0;
	} 
}
int main()
{
	int x,a[50],n,i,minn;
	printf("Nhap so x: "); scanf("%d",&x);
	printf("Nhap so phan tu cua day a: "); scanf("%d",&n);
	// nhap day a
	for (i=0;i<n;i++)
	{
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&a[i]);
	}
	// tim khoang cach giua x voi so nguyen to dau tien trong day
	for (i=0;i<n;i++)
	{
		if (Ktra(a[i])==1)
		{
			minn=abs(x-a[i]);
			break;
		}
	}
	
	for (i=0;i<n;i++)
	{
		if (Ktra(a[i])==1 && minn>= abs(x-a[i])) minn=abs(x-a[i]);
	}
	printf("vay so nguyen to thuoc day nhap vao gan x nhat la:\n");
	for (i=0;i<n;i++)
	{
		if (Ktra(a[i])==1 && minn== abs(x-a[i])) printf("%d\t",a[i]);
		//if (Ktra(a[i])==1) printf("%d\t",a[i]);
	}
	getch();
	return 0;
}
