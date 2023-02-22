#include<stdio.h> 
void main()
{
    int i,n,sum=0;
    printf("\n enter the value of n:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
	printf("\n %d",i);
	i++;
       sum=i+sum;
    }
      printf("\n sum=%d",sum);
}    

