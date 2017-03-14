#include <stdio.h>
#include <conio.h>
int main()
{
	float x,y;
	scanf ("%f%f", &x,&y);
	if((x*x+y*y<=1 && y>=0) || (x*x+y*y<=1 && x>=0))
		printf ("YES");
	else
		printf("NO");
	getch();
}