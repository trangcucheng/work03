// in hinh chu nhat rong

#include <stdio.h>
#include <conio.h>

int main()
{
	int m,n,i,j;
	printf("Nhap chieu ngang: "); scanf("%d",&m);
	printf("Nhap chieu doc: "); scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			if (j==0 || j== m-1 || i==0 || i== n-1)  printf("\t*");
			else printf("\t");
		}
		printf("\n");
	}
	getch();
	return 0;
}
