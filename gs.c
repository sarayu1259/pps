// a program to find smallest and greatest integer
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("\n enter any three distinct numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b&&a<c)
	{
		printf("\n %d is the least number",a);
		if(b<c&&b<a)
		{
			printf("\n %d is the least number",b);
		}
	}
	else
	{
		printf("\n %d is the least number",c);
	}
	if(a>b&&a>c)
	{
		printf("\n %d is the greatest number",a);
		if(b>a&&b>c)
		{
			printf("\n %d is the greatest number",b);
		}
	}
	else
	{
		printf("\n %d is the greatest number",c);
	}
}

