#include<stdio.h>
int main ()
{
int n,rem,rev=0;
printf("enter number:\n");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
rev=10*rev+rem;
n=n/10;
}
printf("reverse of a number is:%d \n",rev);
return 0;
}
