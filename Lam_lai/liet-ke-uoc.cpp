// liet ke cac uoc so

#include <stdio.h>
#include <conio.h>

int main()
{
	int n,i;
	printf("Nhap so tu nhien n:");
	scanf("%d",&n);
	printf("Cac uoc so cua n la:\n");
	for ( i=1;i<=n;i++) {
		if (n%i==0) printf("%d\t",i);
	}
	getch();
	return 0;	
}
