// in ra man hinh ma ki tu nhap tu ban phim
#include <stdio.h>
#include <conio.h>

int main()
{
	char c;
	c='~';
	while (c!=13)
	{
		c=getch();
		printf("Ki tu vua nhap co ma: %d\n",c);
	}
	return 0;
}
