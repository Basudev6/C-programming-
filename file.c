// Wap to program to write and read roll,name and percentage of a students to/from data file.
#include<stdio.h>
void main()
{
	FILE *fp;
	int roll;
	char name[30];
	float per;
	fp=fopen("info.txt","w");
	printf("Enter roll no: ");
	scanf("%d",&roll);
	printf("\nEnter name:");
	scanf("%s",&name);
	printf("\nEnter percentage:");
	scanf("%f",&per);
    fprintf(fp,"\n%d\t%s\t%f",roll,name,per);
	fclose(fp);
	fp=fopen("info.txt","r");
	printf("\nData from the file\n");
	printf("\n%d\t%s\t%.2f",roll,name,per);
	fclose(fp);
 } 
