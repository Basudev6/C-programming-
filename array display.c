// Wap to ask 10 number from the user and display it.
#include<stdio.h>
void main()
{
	int i,a[10];
	printf("Enter any 10 numbers:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The number you entered are:\n");
	for(i=0;i<10;i++)
	  printf("\n%d",a[i]);
}
