// Wap to input numbers and sort them in ascending order.
#include<stdio.h>
int main()
{
	int i,j,n,t;
	printf("How many element you want to input?\n ");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d element one by one:\n",n);
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	 for(j=i+1;j<n;j++)
	  if(a[i]>a[j])
	  {
	  	t=a[i];
	  	a[i]=a[j];
	  	a[j]=t;
	  }
	printf("Sorted element in ascending order are:\n ");
	for(i=0;i<n;i++)
	 printf("%d ",a[i]);
	return 0;   
}
