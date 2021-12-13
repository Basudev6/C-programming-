// Wap to compute an area and circumference of a circle.
#include<stdio.h>
#define pi 3.1416
void main()
{
	float r,a,c;
	printf("Enter the radious of a circle:\n");
	scanf("%f",&r);
	a= pi*r*r;
	c=2*pi*r;
	printf("area of circle=%.2f\ncircumference of circle=%.2f",a,c);
	
}
