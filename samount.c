#include<stdio.h>
void main()
{
	int amount,a,b,c;
	printf("\n give value to integer ");
	scanf("%d",&amount);
	a=amount/500;
	b=amount%500/100;
	c=amount%500%100/50;
	printf("\n %d notes of 500\n%d notes of 100\n%d notes of 50",a,b,c);
}	
