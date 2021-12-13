// passing array to function.
#include<stdio.h>
int sum(const int arr[],int n)
{
	int i,result=0;
	for(i=0;i<n;i++)
	 result=result+arr[i];
//	arr[0]=-99;
	return result; 
	
}
int main()
{
	int num[]={1,2,3,4,5,6};
	int add= sum(num,(int)(sizeof(num))/sizeof(num[0]));
	printf("sum=%d",add);
	printf("%d",num[0]);
	
	return 0;
}
