#include<stdio.h>

 float main()
{
	int base;
	int height;
	int triangle;
	
	printf("enter base triangle =");
	scanf("%d",&base);
	
	printf("enter height teiangle = ");
	scanf("%d",&height);
	
	triangle = base*height/2;
	
	printf("%d",triangle);
	
	return 0;
}