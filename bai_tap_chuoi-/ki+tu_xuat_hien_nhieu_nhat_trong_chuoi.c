#include "stdio.h"
#include "conio.h"
#include "string.h"

int GTLN(int a[],int n)
{
   int i,maxx=a[0],cso;
   for (i=1;i<n;i++)
   {
       if (maxx<a[i])
       {
           maxx=a[i];
           cso=i;
       }
   }
   return cso;
}
int main()
{
    char s1[50],s2[50];
    int i,n,j,l=0,k=0,a[50],cso;
    printf("Nhap chuoi: ");
    gets(s1);
    n=strlen(s1);
    for (i=0;i<n-1;i++)
    {
        int dem=0;
        for (j=i-1;j>=0;j--)
        {
            if (s1[i]==s1[j]) dem++;
        }
        if (dem==0)
        {
            s2[l]=s1[i];
            l++;
        }
    }
    while (s2[k]!='\0')
    {
        int dem=0;
        for (j=0;j<n;j++)
        {
            if (s2[k]==s1[j]) dem++;
        }
        a[k]=dem;
        k++;
    }
    cso=GTLN(a,k);
    printf("Vay ki tu xuat hien nhieu nhat la ki tu %c: %d lan",s2[cso],a[cso]);
    getch();
    return 0;
}


