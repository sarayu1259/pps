#include<stdio.h>
void swap(int*,int*);
void swap(int *pt1,int *pt2)
{
	int t;
	t=*pt1;
	*pt1=*pt2;
	*pt2=t;

}
void main()
{
	int a,b;
	printf("Enter the values of a and b:");
	scanf("%d  %d",&a,&b);
	printf("%d %d",a,b);
	swap(&a,&b);
	printf("a=%d b=%d",a,b);
}
