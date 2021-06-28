#include "stdio.h"
#include "math.h"

double sqr3(float x)
{
    if (x==0) return 0;
    else if (x>0) return exp(log(x)/3);
    else return -sqr3(-x);

}

int main()
{
    float x;
    printf("nhap x: "); scanf("%f",&x);
    printf("Ket qua: %lf",sqr3(x));
    getch();
    return 0;
}
