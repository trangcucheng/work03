#include <stdio.h>
#include <string.h>

int main()
{
	char str1[50],str2[50];
	printf("Nhap chuoi: ");
	gets(str1);
	int i,j=0,n,dem=0;
	n=strlen(str1);
	for (i=n-1;i>=0;i--)
	{
		str2[j]=str1[i];
		j++;
	}
	for (i=0;i<n;i++)
	{
		if (str1[i]==str2[i]) dem++;
	}
	if (dem==n) printf("Day la chuoi doi xung!");
	else printf("Day khong phai la chuoi doi xung!");
}
