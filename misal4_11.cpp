#include <stdio.h>
#include <conio.h>
int main()
{
	float x,y;
	scanf("%f%f", &x,&y);
 if ((y<=-x+1 && y<=x+1 && y>=0) || (y>=x-1 && x>=0 && y<=0))
	 printf("YES");
 else 
	 printf("NO");
	 getch();
}