#include<stdio.h>
void main()
{
	int r,c,i,j;
	printf("enter the number of rows and columns: ");
	scanf("%d %d",&r,&c);
	int a[r][c],b[r][c];
	printf("ENTER MATRIX 1 : ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("\n ENTER MATRIX 2: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	printf("\n ********************\n");
	printf("\n  THE ADDITION OF TWO MATRICES IS: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}

