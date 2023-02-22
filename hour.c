#include<stdio.h>
void main()
{
	int S=3800,h,m,s;
	h=S/3600;
	m=S%3600/60;
	s=s%3600%60;
	printf("\n %d:%d:%d",h,m,s);
}	
