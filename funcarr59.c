#include<stdio.h>
# define MAX 50
void arraynum(int[],int);
void arraynum(int A[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d",A[i]);
}
void main()
{
	int n;
	int array[]={1,2,3,4,5,6,7,8};
	n=sizeof(array)/sizeof(array[0]);
	arraynum(array,n);
}

