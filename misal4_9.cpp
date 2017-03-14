#include <stdio.h>
#include <conio.h>
	int main()
	{
		float x,y;
	scanf("%f%f", &x,&y);
	if((y<=-x && y>=x && x>=-1) || (y<=x && y>=-x && x<=1))
		printf("YES");
	else 
		printf("NO");
	getch();
}