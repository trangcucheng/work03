#include <stdio.h>
#include <conio.h>
float x[]={63.2,-45.6,70.1,3.6,14.5};
int n=sizeof(x)/sizeof(float);
int main()
{
    int i,j;
    float c;
    for (i=0,j=n-1;i<j;i++,j--)
    {
        c=x[i];
        x[i]=x[j];
        x[j]=c;
    }
    printf("\nday ket qua la:\n");
    for (int i=0;i<n;i++)
        printf("%8.2f",x[i]);
    getch();
    return 0;
}
