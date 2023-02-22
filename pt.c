#include<stdio.h>
void main()
{
	int *ptr,i,a[10], n;
	scanf("%d",&n);
	printf("%d",n);
	    ptr=&a[0];
   	    for(i=0;i<n;i++);
	    
	scanf("%d",ptr++);
	    
	ptr=&a[0];
	for(i=0;i<n;i++);
	printf("%d",*ptr++);
}
