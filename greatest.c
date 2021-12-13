// Wap to calculate greatest of 3 number.
#include<stdio.h>
void main()
{
	int a,b,c ;
	printf("Enter any 3 number:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	 printf("%d is greatest number",a);
	else if(b>a&&b>c)
	 printf("%d is greatest number",b);
	else
	 printf("%d is greatest number",c);
	   
}
