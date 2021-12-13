// wap to print pattern of star pyramids.
#include<stdio.h>
void main()
{
	int i,space,star;
	for(i=1;i<=4;i++)
	{
	  for(space=1;space<=4-i;space++)
	       printf("  ");
    
	  for(star=1;star<=2*i-1;star++)
	    printf("* ");
	printf("\n");
    }
}
