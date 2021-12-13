// Wap to display the following fibonacci series: 
//  0 1 1 2 3 5 8...... to nth term.
#include<stdio.h>
void main()
{
	int i,n,c,a=0,b=1;
	printf("Enter the number of terms to be displayed: ");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
	}
}
