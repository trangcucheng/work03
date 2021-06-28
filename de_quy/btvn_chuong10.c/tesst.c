// Nhap vao mot day so thuc, tim day con tang co so phan tu lon nhat

#include <stdio.h>
#include <malloc.h>

int main()
{
    int n,*p,i=0,max=0,csodau,dem;
    p=(int *)malloc(n*sizeof(int));
    printf("Nhap n: "); scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf("Nhap so thu %d: ",i+1);
        scanf("%d",p+i);
    }
    while (i<n)
    {
        dem=0;
        while ((*(p+i)<*(p+i+1)))
        {
            dem++;
            i++;
        }
        if (dem>max)
        {
            max=dem;
            csodau=i-dem;
        }
        i++;
    }
    printf("Day vua nhap:\n");
    for (int i=0;i<n;i++)
    {
        printf("%d  ",*(p+i));
    }
    printf("Day con co so phan tu tang nhieu nhat la:\n");
    for (int i=csodau;i<=csodau+max;i++)
        printf("%d   ",*(p+i));
    return 0;
}
