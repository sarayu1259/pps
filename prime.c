#include<stdio.h>
void main()
{
     int i,n,c=0;
     printf("\n enter the value of n:");
     scanf("%d",&n);
     i=1;
    while(i<=n)
    {
	 if(n%i==0)
	      c++;
	 i++;
    }
    if(c==2)
    {
	    printf("\n %d is prime",n);
    }
    else
    {
	    printf("\n %d is not prime");
    }
}   
	 
    
         
