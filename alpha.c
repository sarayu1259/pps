#include<stdio.h>
void main()
{
	char ch;
	printf("enter the character:");
	scanf("%c",&ch);
	if(('A'<=ch&&ch<='Z')||('a'<=ch&&ch<='z'))
		printf("ch is an alphabet");
	else
		printf("ch is not an alphabet");
}	
