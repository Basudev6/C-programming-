 // Wap to input a matrix of size a*b from user and display it on screen.

#include<stdio.h>
#define A 2
#define B 3
void main()
{
	int matrix [A][B],i,j;
	printf("Enter the matrix elements:\n ");
	for(i=0;i<A;i++)
	 {
	 for(j=0;j<B;j++)
	   scanf("%d",&matrix[i][j]);
     }
	printf("The entered matrix is:\n");
	for(i=0;i<A;i++)
	  {
	    for(j=0;j<B;j++)
	    
	      printf("%d\t",matrix[i][j]);
	    
	    printf("\n");
      }
}

	   
	       



















