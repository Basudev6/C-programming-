// Wap to read two matrices from user and multiply them if possible.
#include<stdio.h>
void main()
{
	int r1,c1,r2,c2;
	printf("Enter the row and column of first matrix:\n");
	scanf("%d%d",&r1,&c1);
	printf("Enter the row and column of second matrix:\n");
	scanf("%d%d",&r2,&c2);
	if(c1==r2)
	
	{
		int i,j,k,a[r1][c1],b[r2][c2],result[r1][c2];
	    printf("Enter the first matrix elements:\n");
	    for(i=0;i<r1;i++)
	    {
		   for(j=0;j<c1;j++)
		     scanf("%d",&a[i][j]);
     	}
     	printf("The first matrix is:\n");
     	for(i=0;i<r1;i++)
	    {
		   for(j=0;j<c1;j++)
		     printf("%d ",a[i][j]);
		   printf("\n");  
     	}
     	printf("Enter second matrix elements:\n");
	    for(i=0;i<r2;i++)
	    {
		   for(j=0;j<c2;j++)
		     scanf("%d",&b[i][j]);	  
	    }
	    printf("The second matrix is:\n");
	    for(i=0;i<r2;i++)
	    {
		   for(j=0;j<c2;j++)
		     printf("%d ",b[i][j]);
		   printf("\n");    
     	}
	    for(i=0;i<r1;i++)
	    {
	    	for(j=0;j<c2;j++)
	    	{
	    		result[i][j]=0;
	    		for(k=0;k<c1;k++)				    
	    		   result[i][j]=result[i][j]+a[i][k]*b[k][j];	    		  
			}
			  
		}
		printf("The result matrix is:\n");
		for(i=0;i<r1;i++)
	    {
	    	for(j=0;j<c2;j++)
	    		printf("%d ",result[i][j]);
	    		
	        printf("\n");
	    }
 	}
	
	else
	 printf("multiplication is not possible.");
}
