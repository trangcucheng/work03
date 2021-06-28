#include <stdio.h>
#include <conio.h>
#include <math.h>

double bp(double x)
{
	return x*x;
}

int main()
{
	int i,j;
	double x=1.0;
	double (*f[6])(double);
	f[1]=bp;
	f[2]=sin;
	f[3]=cos;
	f[4]=exp;
	f[5]=sqrt;
	while (x<=10.0)
	{
		printf("\n");
		for (j=1;j<=5;++j)
		{
			printf("%10.2f",f[j](x));
			x+=0.5;
		}
	}
	getch();
	return 0;
}
