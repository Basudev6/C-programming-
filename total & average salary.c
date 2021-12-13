// Wap to calculate total and average salary of 5 person.
#include<stdio.h>
void main()
{
	int i,a[5],total=0 ;
	float average;
	printf("Enter salary of 5 person:\n");
	for(i=0;i<5;i++)
	 scanf("%d",&a[i]);
	for(i=0;i<5;i++) 
	 total=total+a[i];
	printf("Total salary is %d\n",total);
	average=total/5;
	printf("Average salary is %.2f",average); 
	
}
