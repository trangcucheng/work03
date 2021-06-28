// thuat toan tim kiem
#include<stdio.h>

int searchx(int arr[], int n, int x)
{

    for (int i = 0; i < n; i++)
    {
        if(x == arr[i])
            return i ;
    }
    return -1 ;
}

int TK_NP(int a[],int l,int r,int x)
{
    int m;
    if (r>= l)
    {
        m=(l+r)/2;
        if(a[m]==x)
            return m;
        if(a[m]>x)
            return TK_NP(a,l,m-1,x);
        else return TK_NP(a,m+1,r,x);
    }
    else return -1;
}

int main()
{
    int n,l,r,x;
    printf("\n Nhap n:");
    scanf("%d", &n);
    printf("Nhap phan tu can tim: ");
    scanf("%d",&x);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    if(TK_NP(a,0,n-1,x)!= -1)
        printf("\n Vi tri thu  %d xh \n", TK_NP(a,0,n-1,x)+1);
    else printf("\n Khong xh trong mang \n");
    return 0;
}
