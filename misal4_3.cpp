#include <stdio.h>
#include <conio.h>
int main()
{
float x,y;
printf("Enter x,y:");
	scanf("%f%f",&x,&y);
	if ((x>=-1&&x<=1&&y<=1 && y>=0) ||(x>=-1 && x<=0 && y<=0 && y>=-1))
	printf("YES");
	else 
		printf("NO");
	getch();
}