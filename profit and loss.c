// Wap to input cp and sp and determine whether the profit and loss.
#include<stdio.h>
void main()
{
	int cp,sp,p,l;
	printf("Enter cost price:\n");
	scanf("%d",&cp);
	printf("Enter selling price:\n");
	scanf("%d",&sp);
	if(sp>cp)
	{
		p= sp-cp;
		printf("profit is %d",p);
	}
	else
	{
		l=cp-sp;
		printf("loss is %d",l);
	}
}
