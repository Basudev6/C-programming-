// passing 2D array to function.
#include<stdio.h>
int diagnol_sum(int[3][3]);
int main()
{
	int mat[3][3]={{1,2,3},{1,2,3},{1,2,3}};
	
	printf(" sum of diagnol=%d",diagnol_sum(mat));
	return 0;
	
}
int diagnol_sum(int matrix[3][3])
{
	int i,j,sum=0;
	for(i=0;i<3;i++)
	 for(j=0;j<3;j++)
	   if(i==j)
	      sum=sum+matrix[i][j];
	return sum;      
}
