#include<stdio.h>

main()
{
	int x, y, result;
	printf("Enter of x value=");
	scanf("%d", &x);
	printf("Enter of y value=");
	scanf("%d", &y);
	result =  x*x*x+ 3*x*x*y + 3*y*y*x + y*y*y;
	printf("result= %d",result);	
}

