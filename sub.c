#include<stdio.h>
void main()
{
	int days=60,weeks,years,months;
	years=days/365;
	months=days/30;
	weeks=days/7;
	printf("%d %d %d",years, months, weeks);
}
		
