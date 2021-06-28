#include"stdio.h"
#include"conio.h"
int countnumber(int n)
{
    int count=0;
    while(n!=0)
    {
        n/=10;
        count++;
    }
    return count;
}
int main()
{
    int n,count;
    printf("nhap n");
    scanf("%d",&n);
    count=countnumber(n);
    if(n<=0){printf("so n la %d ",n);}
    else
    {
        printf("n co %d chu so",count);
        printf("\nso n sau khi sap xep la :");
    }
return 0;
}


