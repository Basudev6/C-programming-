// Wap to convert a temperature given in fahrenheit to celsius.
#include<stdio.h>
void main()
{
	float c,f;
	printf("Enter temperature in fahrenheit:\n");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("Temperature in celsius=%.2f",c);
}
