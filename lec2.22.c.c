#include<stdio.h>

int main()

{
	
   	int length ;
	int width;
	int area;
	
	printf("enter length of rectangle");
	scanf("%d",&length);
	
	printf("enter width of rectangle");
	scanf("%d",&width);
	
	area  = length * width;
	
	printf("area of rectangal = %d",&area);
	
	return 0;
}