#include<stdio.h>
void even(int);
void even(int a)
{
	if(a%2==0)
		printf("number is even");
	else
		printf("number is odd");
}
void main()
{
	int a;
	printf("enter the value of n:");
	scanf("%d",&a);
	printf("%d",a);
	even(a);
}

