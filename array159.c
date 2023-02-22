#include<stdio.h>
void printarray(int[],int);
void printarray(int A[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d",A[i]);
}
void findarray(int[],int);
void findarray(int A[],int n)
{ 
	 int max=A[0],i;
	for(i=0;i<n;i++)
	{
	      if(A[i]>max)
		      max=A[i];
	}
	printf("\nmax=%d",max);
}
void findsum(int [],int);
void findsum(int A[],int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
	{
		sum=sum+A[i];
	}
	printf("\nsum=%d",sum);
}
void findsearch(int[],int ,int);
void findsearch(int A[],int n,int u)
{
	int i;
        printf("\nsearch=%d",A[u]);
}
void findmin(int[],int);
void findmin(int A[],int n)
{
	int min=A[0],i;
	for(i=0;i<n;i++)
	{
		if(min<A[0])
			min=A[0];
	}
	printf("\nmin=%d",min);
}
void main()
{
	int n,u;
	printf("enter:");
	scanf("%d",&u);
	printf("%d",u);
    int Array[]={1,2,3,4,15,6,7,8};
	n=sizeof(Array)/sizeof(Array[0]);
	findarray(Array,n);
	findsum(Array,n);
	findsearch(Array,n,u);
	findmin(Array,n);
}

