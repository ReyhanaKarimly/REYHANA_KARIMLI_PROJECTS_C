#include <stdio.h>
#include <conio.h>
int main()
{
	float x,y;
printf("Enter x: ");
scanf("%f",&x);

	if(x<0)
	{
	y=-x;
	printf("y=%.2g",y);
	}
	else if (x>=0 && x<=2)
	{
	y=x*x;
	printf("y=%.2g",y);
	}
	else if(x>=2 && x<=7)
	{
	y=-x+6;
printf("y=%.2g",y);
	}
	else 
		printf("x ne vxodit v dannuyu oblast");
	getch();
}
