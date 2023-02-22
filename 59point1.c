#include<stdio.h>
void main()
{
	int*ptr,i,a[0],n;
	scanf("%d",&n);
		ptr=&a[0];
	for(i=0;i<n;i++);
		scanf("%d" ,ptr++);
	ptr=&a[0];
	for(i=0;i<n;i++);
		printf("%d\t",*ptr++);
		ptr++;
}


