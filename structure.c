
  // Wap that define a structure to store the record of an employee with id,name,sex and salary fields. 
 // Read a record of an employee from user and display the record.
 #include<stdio.h> 
 void main()
 {
 	struct employee
 	{
 	   int id,salary;
		char name[15];
		char sex[6];		
	};
	struct employee e;
	printf("Enter data for an employee:");
	printf("\n\nEnter id:");
	scanf("%d",&e.id);
	printf("\nEnter employee name:");
	scanf("%s",&e.name);
	printf("\nEnter sex:");
	scanf("%s",&e.sex);
	printf("\nEnter salary:");
	scanf("%d",&e.salary);
	printf("\n===The records of an employee is===\n");
	printf("\nId: %d",e.id);
	printf("\nName: %s",e.name);
	printf("\nSex: %s",e.sex);
	printf("\nSalary: %d",e.salary); 
 }
