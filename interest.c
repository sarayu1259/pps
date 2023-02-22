#include<stdio.h>
#include<math.h>
void main()
{
	int p=10000,t=1,r=2,c;
	c=p*(1+r/100)^t;
	printf("\n compound interest=%d",c);
}
