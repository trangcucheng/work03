// nhap vao chieu rong va chieu cao in ra hinh chu nhat bang dau *
#include <stdio.h>
#include <conio.h>

int main()
{
	int i,j,m,n;
	printf("Nhap vao chieu dai: "); scanf("%d",&m);
	printf("Nhap vao chieu rong: "); scanf("%d",&n);
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++) printf("\t*");
		printf("\n");
	}
	getch();
	return 0;
}
