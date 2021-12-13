
// total and percentage of pass students.
#include<stdio.h>
void main()
{
	float a,b,c,d,e,total,per;
	printf("Enter the number of Nepali , english , math , science and social respectively:\n");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	if(a>=32&&b>=32&&c>=32&&d>=32&&e>=32)
	{
		total=a+b+c+d+e;
		printf("Total number is %.2f\n",total);
		per=(total/5);
		printf("The percentage is %.2f\n",per);
	}
	else
	    printf("You are not pass.");
}
