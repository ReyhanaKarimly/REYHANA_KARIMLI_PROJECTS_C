#include <stdio.h>
#include <conio.h>
int main()
{
	float x,y;
	printf("Enter x,y: ");
	scanf("%f%f",&x,&y);
	if (y>=x && y<=1 && x>=-1)
		printf("YES");
	else
		printf("NO");
	getch();
}