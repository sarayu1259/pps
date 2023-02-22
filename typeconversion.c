//c program to convert one datatype to another 
#include<stdio.h>
int main()
{
	int num;double num1;
	num1 = 5.5;
	num = num1;
	printf("The decimal number is %lf\n",num1);
	printf("The integer form of the given number is %d\n",num);
	int number;double number1;
	number = 10;
	number1 = (double)number;
	printf("The integer number given is %d\n",number);
	printf("The decimal form of the given number is %.2lf\n",number1);
}

