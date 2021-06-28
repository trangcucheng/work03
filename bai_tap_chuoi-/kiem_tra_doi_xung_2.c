#include <stdio.h>
#include <string.h>

int main()
{
	char str[50];
	printf("Nhap chuoi: ");
	gets(str);
	int i,j,n,dem=0;
	n=strlen(str);
	for (i=0,j=n-1;i<j;i++,j--)
	{
		if (str[i]==str[j]) dem++;
		
	}
	if (dem==n/2) printf("Day la chuoi doi xung!");
	else printf("Day khong phai la chuoi doi xung!");
}
