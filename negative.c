//pogram to find the given number is negative or positive.
#include<stdio.h>
void main()
{
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	if(n<0)
	    printf("Negative.");
	else if(n==0)
	    printf("neither negative nor positive.");
	else
	    printf("positive."); 		
	
}
