// Wap to calculate the quardic equation.(ax*2+bx+c)
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	float root1,root2;
	float root_part,denum;
	printf("Enter value of a,b,c\n");
	scanf("%f%f%f",&a,&b,&c);
	root_part= sqrt(b*b-4*a*c);
	denum= 2*a;
	root1=(-b+root_part)/denum;
	root2=(-b-root_part)/denum;
	printf("root1=%.2f\nroot2=%.2f",root1,root2);
	return 0;
}
