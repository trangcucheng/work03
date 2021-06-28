// tim phan tu xuat hien nhieu nhat trong mang
#include <stdio.h>
#include <conio.h>

int main()
{
	int n,arr[50],i,tempt[50],j;
	printf("Nhap so phan tu cua mang: "); scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
		tempt[i]=-1;
		
	}
	for (i=0;i<n;i++)
	{
		int count =1;
		for (j=i+1;j<n;j++)
		{
			if (tempt[i]!=0 && arr[i]==arr[j]) 
			{
				count++;
				tempt[j]=0;
			} 
		}
		if (tempt[i]!=0) tempt[i]=count;
	}
	int max=tempt[0];
	for (i=1;i<n;i++)
	{
		if ( tempt[i]>=max) max=tempt[i];
	}
	printf("cac phan tu xuat hien nhieu lan nhat la:%d lan \n",max);
	for (i=0;i<n;i++)
	{
		if (tempt[i]== max) printf("%d  ",arr[i]);
		//printf("%d",count[i]);
	}
	getch();
	return 0;
}
