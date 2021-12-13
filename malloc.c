// Wap that reads the marks of n subjects and finds the sum and average using the 
//dynamic array using dynamic memory allocation function malloc().
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i;
	float *p,sum=0,avg;
	printf("Enter the number of subjects:\n");
	scanf("%d",&n);
	printf("Enter marks of each subject:\n");
	p=(float*)malloc(n*sizeof(float));
	for(i=0;i<n;i++)
	{
	scanf("%f",(p+i));
	sum+=*(p+i);
    }
    avg=sum/n;
    printf("\n The sum of the marks: %.2f",sum);
    printf("\n The average marks is: %.2f",avg);
    free(p);
}
