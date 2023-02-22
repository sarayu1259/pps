#include<stdio.h>
void main()
{
   int n,r;
   printf("\n enter the value of n:");
   scanf("%d",&n);
   while(n>0)
   {
	r=n%10;
        printf("\n %d",r);
        n=n/10;
   }
}   
