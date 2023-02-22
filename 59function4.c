#include<stdio.h>
#include<math.h>
void armstrong(int);
void armstrong(int n)
{
	int sum=0,rem,t=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	printf("sum=%d",sum);

	if(sum==t)
	{
		printf("\n armstrong");
	}
	else
		printf("\n not an armstrong");
	}

void main()
{
	int s;
	printf("Enter the  value:");
	scanf("%d",&s);
	printf("%d",s);
	armstrong(s);
	
}
