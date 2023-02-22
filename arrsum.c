#include<stdio.h>
int main ()
{
int a[5],sum=0;
int i;
int *ptr;
ptr=&a[0];
printf("enter 5 elements:\n");
for(i=0;i<5;i++)
{scanf("%d",&a[i]);

sum=sum+ *ptr++ ;
}
printf("sum of elements is:%d \n",sum);
return 0;
}
