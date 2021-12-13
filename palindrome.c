// Wap to input a number and test if it a palindrome.(1221=1221)
#include<stdio.h>
void main()
{
	int n,rem,rev=0,temp;
	printf("Enter a number:\n");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(temp==rev)
	 printf("The given number is palindrome.");
    else
	 printf("The given number is not palindrome.");
}
