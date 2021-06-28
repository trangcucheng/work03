#include "stdio.h"
#include "conio.h"
#include "string.h"

void ChuanHoa(char s[] )
{
    int n,j;
    n=strlen(s);
    s[0]-=32;
    for (j=1;j<n;j++)
    {
        if (s[j]==' ') s[j+1]-=32;
    }
}

int main()
{
    int i,n;
    char s[50][50];
    printf("Nhap so luong hoc sinh: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Nhap ho va ten hoc sinh thu %d: ",i+1);
        fflush(stdin);
        gets(s[i]);
    }
    printf("Danh sach hoc sinh la:\n ");
     for (i=0;i<n;i++)
     {
         ChuanHoa(s[i]);
         printf("\n%d. %s",i+1,s[i]);
     }
    getch();
    return 0;
}
