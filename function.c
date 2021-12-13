// function
#include<stdio.h>
void pattern_1()
{
		int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		 printf(" *");
	printf("\n");	 
	}
}
void pattern_2()
{
		int i,j;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=i;j++)
		 printf(" *");
	printf("\n");	 
	}
}
void main()
{
	pattern_1();
	pattern_2();
}

