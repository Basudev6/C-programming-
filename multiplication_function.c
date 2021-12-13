// Wap to print multiplication table of n number using function.
#include<stdio.h>
void mtable(int);
void main()
{
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	mtable(n);
}
void mtable(int n)
{
	int i;
	for(i=1;i<=10;i++)
	  printf("%d*%d=%d\n",n,i,n*i);	 
}

