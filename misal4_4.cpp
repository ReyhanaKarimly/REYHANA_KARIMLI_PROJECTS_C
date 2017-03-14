#include <stdio.h>
#include <conio.h>
int main()
{
	float x,y;
	printf("Enter x,y: ");
	scanf("%f%f", &x,&y);
	if ((y*y+x*x<=1 && y>=0 && x>=0) || (x<=0 && x>=-1 && y<=0 && y>=-1))
		printf("YES");
	else
		printf("NO");
	getch();
}