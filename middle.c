// Wap to input 3 number and find the middle number.
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter any different 3 number:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(b>a&&a>c||c>a&&a>b)
	   printf("middle number is %d",a);
	   
	else if(a>b&&b>c||c>b&&b>a)
	   printf("middle number is %d",b);
	   
	else
	   printf("middle number is %d",c);
}
