// Wap to find transpose of a matrix.
#include<stdio.h>
void main()
{
	int i,j,n,m;
	printf("Enter the size of Row in matrix:\n");
	scanf("%d",&n);
	printf("Enter the size of column in matrix:\n");
	scanf("%d",&m);
	int a[n][m]; 
	printf("Enter the matrix elements:\n");
	for(i=0;i<n;i++)
	{
      for(j=0;j<m;j++)
       scanf("%d",&a[i][j]);
	}
	printf("The entered matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++) 
		 printf(" %d",a[i][j]);
	printf("\n");
    }
    printf("The transpose matrix is:\n");
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	 printf(" %d ",a[j][i]);
    printf("\n"); 
	}
}
