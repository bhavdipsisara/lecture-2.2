#include<stdio.h>

float main()

{
	float a,p,r,t;
	
	printf("enter p interest");
	scanf("%f",&p);
	
	printf("enter r interest");
	scanf("%f",&r);
	
	printf("enter t interest");
	scanf("%f",&t);
	
	a = p*r*t/100;
	
	printf("%f",a);
	
	return 0;
}