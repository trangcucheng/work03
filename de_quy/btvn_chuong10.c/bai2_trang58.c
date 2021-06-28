#include "stdio.h"
#include "conio.h"

int main()
{
    int n,i,*p,count=0,h;
    printf("Nhap so phan tu cua day: "); scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Nhap phan tu thu %d: ",i+1);
        scanf("%d",(p+i));
    }
    for (i=0;i<n-1;i++)
    {
        if (*(p+i)<=*(p+i+1)) count++;
    }
    if (count== n-1) printf("\nDay la day tang!\n");
    else
    {
        for (i=0;i<n-1;i++)
        {
            for (int j=i+1;j<n;j++)
            {
                if (*(p+i)>=*(p+j))
                {
                    h=*(p+i);
                    *(p+i)=*(p+j);
                    *(p+j)=h;
                }
            }
        }
        printf("\n Day khong phai la day tang dan.Day sau khi sap xep lai:\n");
    }
    for (i=0;i<n;i++) printf("%d  ",*(p+i));
    getch();
    return 0;
}
