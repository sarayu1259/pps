#include<stdio.h>
#define MAX 100
void main()
{
	int r1,,k,c1,r2,c2,i,j,a[MAX][MAX],b[MAX][MAX],c[MAX][MAX];
        printf("enter the values of r1,c1");
	scanf("%d %d",&r1,&c1);
	printf("%d %d",r1,c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
			scanf("%d",&b[i][j]);
	}
        while(k=1)
	c[i][j]=0;
	c[i][j]=c[i][j]+a[i][k]*b[k][j];
        k++;	
}
