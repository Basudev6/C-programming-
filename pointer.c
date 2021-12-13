// Wap showing simple pointer arithmetic.
#include<stdio.h>
void main()
{
	int *p;
	int q;
	p=&q;
	*p=10;
	printf("The value of q is:%d",*p);
	printf("\n The address of q is:%d",p);
}
