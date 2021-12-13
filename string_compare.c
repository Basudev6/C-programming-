// Wap to compare two strings.
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[50],str2[50];
	int v;
	printf("Enter first string: ");
	gets(str1);
	printf("\nEnter second string: ");
	gets(str2);
	v=strcmp(str1,str2);
	if(v==0)
	 printf("\nBoth string are same.");
	else if(v>0)
	 printf("\n%s comes after %s",str1,str2);
	else
	 printf("\n%s comes before %s",str1,str2); 
}
