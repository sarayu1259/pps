#include<stdio.h>
void readmatrix(int[][6],int,int);
void readmatrix(int A[][6],int n1,int n2)
{ 
	int i,j;

	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("%5d",A[i][j]);
	}
	printf("\n");
	}
}
void main()
{
	int r1,c1,i,j,A[6][6];
	   printf("enter the no of rows and cols:");
	  scanf("%d %d",&r1,&c1);
	  printf("%d %d",r1,c1);
	  printf("enter the r1*c1 elements:");
	  for(i=0;i<r1;i++)
	  {
		  for(j=0;j<c1;j++)
		  {
			  scanf("%5d",&A[i][j]);
	  }
	  printf("\n");
}
	  readmatrix(A,r1,c1);
}
