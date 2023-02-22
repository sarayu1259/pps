#include<stdio.h>
void prime(int );
void prime(int a)
{
        int i,c=0;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			c++;
		}
	}
		if(c==2)
		{
			printf("\n %d is prime",a);
		}
		else
		{
			printf("\n %d is not prime",a);
		}
}
void main()
{
	int n;
        printf("Enter the value of n:");
	scanf("%d",&n);
	printf("%d",n);
	prime(n);
}

