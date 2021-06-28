// Nhap vao mot day so thuc, tim day con tang co so phan tu lon nhat

#include <stdio.h>
#include <malloc.h>

int main()
{
    int n,*p,i=0,max=0,dem1,dem2,k=0,j,tempt=0;
    p=(int *)malloc(n*sizeof(int));
    printf("Nhap n: "); scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf("Nhap so thu %d: ",i+1);
        scanf("%d",p+i);
    }
    while (i<n)
    {
        dem1=0;
        for (int k=i;k<n-1;k++)
        {
            if (*(p+k)<*(p+k+1)) dem1++;
            else break;
        }
    if (dem1>max) max=dem1;
    i=k+dem1;
    }
    printf("\n%d",max);
    while (tempt<n)
    {
        dem2=0;
        for (j=tempt;j<n-1;j++)
        {
            if (*(p+j)<*(p+j+1)) dem2++;
            else break;
        }
        if (dem2==max)
        {
            for (int k=j-dem2;k<=j;k++ )
            {
                printf("%d   ",*(p+k));
            }
            printf("\n");
        }
        tempt=j+2;
    }
    return 0;
}
