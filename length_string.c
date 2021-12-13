// finding length of a string using userdefine function.
#include<stdio.h>
int length(char[]);
int main()
{
	char name[]="Basudev neupane";
	printf("length=%d",length(name));
	
	return 0;
	
	
}
int length(char str[])
{
	int i,count=0;
	for(i=0;str[i]!='\0';i++)
	 count++;
	return count;
 } 
