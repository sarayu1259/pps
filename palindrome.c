// string palindrome
#include<stdio.h>
#include<string.h>
void main()
{
	char a[2000];
	int i,len,flag=0,strlen;
	printf("\n ENTER THE STRING :");
	scanf("%s",&a);
		len=strlen();
	for(i=0;i<len/2;i++)
	{
		if(a[i]==a[len-i-1])
			flag++;
	}
	if(flag==i)
		printf("\n STRING IS PALINDROME");
	else	
		printf("\n STRING IS NOT A PALINDROME");
}

