// function
#include<stdio.h>
void print_pattern1();
void print_pattern2();
void main()
{
   print_pattern1();
   print_pattern2();	
}
void print_pattern1()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		 printf(" *");
	printf("\n");	 
	}
 } 
 void print_pattern2()
 {
 		int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		 printf(" *");
	printf("\n");	 
	}
 }
