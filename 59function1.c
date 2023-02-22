#include<stdio.h>
int sample(int,int);
int  sample(int a,int b)
{
	int c;
	c=a+b;
        return c;
}
void main()
{
	int res;
       res=sample(7,8);
       printf("res=%d",res);
}
