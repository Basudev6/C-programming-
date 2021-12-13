// Wap to input two matrix add them and display in proper format.
#include<stdio.h>
void main()
{
	int i,j,a[5][5],b[5][5],s[5][5];
	printf("Enter the first matrix elements:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		 scanf("%d",&a[i][j]);
	}
	printf("Enter second matrix elements:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		 scanf("%d",&b[i][j]);
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		 s[i][j]= a[i][j]+b[i][j];
	}
	printf("The sum of two matrices:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		 printf("%d\t",s[i][j]);
		printf("\n"); 
	}
}
