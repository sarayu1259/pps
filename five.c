#include<stdio.h>
void main()
{
	int num;
	printf("enter the value of num");
	scanf("%d",&num);
	if((num%5==0)&&(num%7==0))
		printf("the number is divisible by both 5 and 7");
}	
