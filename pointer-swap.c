// Wap to swap pointer values.
#include<stdio.h>
void main()
{
	int a=44;
	int b=66;
	int *pa,*pb,*pt;
	pa=&a;
	pb=&b;
	printf("*pa=%d *pb=%d\n",*pa,*pb);
	pt=pa;
	pa=pb;
	pb=pt;
	printf("*pa=%d *pb=%d\n",*pa,*pb);
}
