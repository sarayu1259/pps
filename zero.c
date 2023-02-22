#include<stdio.h>
void main()
{
	int num;
	printf("\n enter the value odf a");
	scanf("%d",&num);
	if(num>0)
		printf("num is positive");
	else if(num<0)
		printf("num is negative");
	else
		printf("num is equal to zero");
}	
