// Wap to convert decimal to binary.
#include<stdio.h>
void main()
{
	int i=0,j,n,b[20];
	printf("Enter the decimal number:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		b[i]=n%2;
		n=n/2;
		i++;
	}
	printf("Binary value=");
	for(j=i-1;j>=0;j--)
	  printf("%d",b[j]);
}
