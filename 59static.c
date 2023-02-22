#include<stdio.h>
int num();
int num()
{
	static int count;
	count++;
	return count;
}
void main()
{
	int c;
	c=num();
	c=num();
	printf("%d %d",c,c);
}
