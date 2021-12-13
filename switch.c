// Wpa to demonstrate arithematic operations using switch statement.
#include<stdio.h>

void main()
{
	float a,b;
	char ch;
	printf("Enter any two numbers:\n");
	scanf("%f%f",&a,&b);
	printf("Enter + for addition.\n");
	printf("Enter - for subtraction.\n");
	printf("Enter * for multiplication.\n");
	printf("Enter / for division.\n");
	printf("Enter your choice.\n");
	scanf(" %c",&ch);
	switch(ch)
	{
		case'+':
			printf("The sum is %.2f\n",a+b);
			break;
		case'-':
			printf("The division is %.2f\n",a-b);
			break;
		case'*':
			printf("The multiplication is %.2f\n",a*b);
			break;
		case'/':
			printf("The division is %.2f\n",a/b);
			break;	
		default:
			printf("Invaild choice");
			
	}
	
	
}
