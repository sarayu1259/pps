#include<stdio.h>
void main()
{
	int rows1,cols1,rows2,cols2,i,j,a[50][50],b[50][50],c[50][50];
	printf("enter the values of rows1,cols1,rows2,cols2:");
	scanf("%d %d %d %d",&rows1,&cols1,&rows2,&cols2);
	if(rows1==rows2&&cols1==cols2)
	for(i=0;i<rows1;i++);
	{
		for(j=0;j<cols1;j++);
	       printf("	enter the values of row1*col1:");
		scanf("%d",&a[i][j]);
	
	}
	for(i=0;i<rows2;i++);
	{
		for(j=0;j<cols2;j++);
		printf("enter the values of row2*col2:");
		scanf("%d",&b[i][j]);

	}
	for(i=0;i<rows1;i++);
	{
		for(j=0;j<cols2;j++);
		c[i][j]=a[i][j]+b[i][j];
	}
	printf("%d",c[i][j]);
}


