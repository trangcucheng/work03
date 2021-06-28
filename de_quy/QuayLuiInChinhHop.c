#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

void Xuat(int a[], int n)
{
	for (int i=0;i<n;i++) printf("%d    ",a[i]);
	printf("\n");
}

void ChinhHop(int a[], int n, int k, int i, bool check[])
{
   for (int j=0;j<n;j++)
   {
       if (check[j]==true)
       {
           a[i]=j+1;
           check[j]=false;
           if (i==(k-1)) Xuat(a,k);
           else
           {
           ChinhHop(a,n,k,i+1,check);
           }
           check[j]=true;
       }
   }
}

int main()
{
	int n,k,a[20];
	printf("Nhap n: "); scanf("%d",&n);
	printf("Nhap k: "); scanf("%d",&k);
	bool check[n];
	for (int i=0;i<n;i++) check[i]=true;
	ChinhHop(a,n,k,0,check);
	getch();
	return 0;
}
