#include<stdio.h>
int fact(int);
int fact(int a)
{
	int i,f=1;
	for(i=1;i<=a;i++)
		f=f*i;
	printf("\n factorial=%d",f);
}
void main()
{
	int n;
	printf("enter the num:");
	scanf("%d",&n);
	printf("%d",n);
	fact(n);
}
