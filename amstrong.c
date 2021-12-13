// Wap to find given number is amstrong or not.(1634=1*4+6*4+3*4+4*4)
#include<stdio.h>
#include<math.h>
void main()
{
	int n,rem,temp1,temp2,count=0,sum=0;
	printf("Enter a number:\n");
	scanf("%d",&n);
	temp1=n;
	temp2=n;
	while(n!=0)
	{
		n=n/10;
		count+=1;
	}
    while(temp1!=0)
    {
    	rem=temp1%10;
    	sum=sum+pow(rem,count);
    	temp1=temp1/10;
	}
	 if(temp2==sum)
		printf("%d is amstrong number.",temp2);
	else
	   	printf("%d is not amstrong number.",temp2);
}




  

