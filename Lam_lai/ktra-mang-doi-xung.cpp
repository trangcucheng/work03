// kitra mang doi xung
#include <stdio.h>
#include <conio.h>

int main()
{
	int n,arr[50],i,j;
	printf("Nhap so phan tu cua mang:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	bool ok;
	for (i=0,j=n-1;i<j;i++,j--)
	{
		if (arr[i]!=arr[j]) break;
		else ok=true;
	}
	if (ok == true) printf("Mang doi xung!");
	else printf("Mang KHONG doi xung!");
	getch();
	return 0;
}
