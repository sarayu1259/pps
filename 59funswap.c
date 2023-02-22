#include<stdio.h>
void swap(int ,int);
void swap(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	printf("a=%d,b=%d",a,b);
}
void main()
{
	int a,b;
	printf("Enter the values of a and b:");
	scanf("%d %d",&a,&b);
	printf("%d %d",a,b);
	swap(a,b);
	printf("a=%d b=%d",a,b);
}
