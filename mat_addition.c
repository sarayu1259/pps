//c program to add two matrices
#include<stdio.h>
int main()
{
	int mat1[10][10],mat2[10][10],sum[10][10],r1,c1,r2,c2,i,j;
	printf("Enter the number of rows and columns in matrix 1\n");
	scanf("%d%d",&r1,&c1);
	printf("Enter the number of rows and columns in matrix 2\n");
	scanf("%d%d",&r2,&c2);
	if(r1==r2&&c1==c2)
	{
		printf("Matrix addition is possible\n");
		printf("Enter the elements of matrix 1\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&mat1[i][j]);
			}
		}
		printf("Enter the elements of matrix 2\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&mat2[i][j]);
			}
		}
	}
	else
	{
		printf("Matrix addition is not possible\n");
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{


