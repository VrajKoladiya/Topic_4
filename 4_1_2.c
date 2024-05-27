#include<stdio.h>

main()
{
	int x, y, result;
	printf("Enter of x value=");
	scanf("%d", &x);
	printf("Enter of y value=");
	scanf("%d", &y);
	result = x*x-2*x*y+y*y;
	printf("result= %d",result);	
}

