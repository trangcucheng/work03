// Nhap mang co n phan tu kieu nguyen, nhap phan tu x, kiem tra xem x co trong mang hay khong, neu co thi in ra vi tri xuat hien dau tien

#include <stdio.h>
#include <conio.h>

int main()
{
    int n,i,x, tempt=0;
    printf("Nhap n: "); scanf("%d",&n);
    printf("Nhap x: "); scanf("%d",&x);
    int a[10];
    for (i=0;i<n;i++)
    {
        printf("Nhap phan tu thu %d ",i+1);
        scanf("%d",&a[i]);
    }

    for (i=0;i<n;i++)
    {
        if (a[i]==x)
        {
            printf("%d xuat hien lan dau tien o vi tri thu %d",x,i+1);
            tempt=1;
            break;
        }
    }
    if (tempt == 0) printf("%d khong xuat hien trong mang!",x);
    getch();
    return 0;
}
