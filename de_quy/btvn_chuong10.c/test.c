// Nhap day gom n so, sap xep lai day tang dan sao cho moi phan tu deu chi xuat hien 1 lan
#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

void Nhap(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("Nhap phan tu thu %d ", i + 1);
		scanf("%d", &a[i]);
	}
}

void In(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d    ", a[i]);
	}

}

void SapXep(int a[], int n)
{
	int i,j,h;
	for (i = 0; i < n-1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				h = a[i];
				a[i] = a[j];
				a[j] = h;
			}
		}
	}
}
int main()
{
	int a[50],b[50],i, n, k=0,dem;
	printf("Nhap n: "); scanf("%d", &n);
	Nhap(a, n);
	for (i = 0; i < n; i++)
	{
		dem = 0;
		for (int j = i+1; j < n; j++)
		{
			if (a[j] == a[i]) dem++;
		}
		if (dem == 0)
		{
			b[k] = a[i];
			k++;
		}
	}

	SapXep(a, n);
	SapXep(b, k);
	printf("Day nhap vao:\n");
	In(a, n);
	printf("\nKet qua:\n");
	In(b, k);
	getch();
	return 0;

}
