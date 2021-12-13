// Wap to convert binary to decimal.
#include<stdio.h>
#include<math.h>
void main()
{
	int j,rem,sum=0,n;
	long int i=0;
	printf("Enter binary number:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem*pow(2,i);
		n=n/10;
		i++;
	}
	printf("Decimal value=%d",sum);
	
	
}
