#include<stdio.h>
void main()
{
	int age;
	printf("\n enter the value of age");
	scanf("%d",&age);
	if(age>18)
		printf(" person is eligible to vote");
	else 
		printf("person is not eligible to vote");
}	
