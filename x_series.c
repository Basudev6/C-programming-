// Wap to find x of the following series for the given value of a and N.
// x=a-a^2/2+a^3/3-a^4/4........up to N.
#include<stdio.h>
#include<math.h>
void main()
{
	int a,n,i;
	float x=0;
	printf("Enter values of a and n:\n");
	scanf("%d%d",&a,&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		x=x-pow(a,i)/i;
		else
		x=x+pow(a,i)/i;
	}
	printf("x=%.2f",x); 
}

