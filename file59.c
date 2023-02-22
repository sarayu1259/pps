#include<stdio.h>
void main()
{
	FILE *fp1,*fp2,*fp3;
	char ch;
	fp1=fopen("pps.c","a");
	fp2=fopen("spp.c","a");
	fp3=fopen("total.c","a");
	if(fp1==NULL||fp2==NULL||fp3==NULL)
         printf("unsuccessful");
	printf("input data");
	while((ch=getchar())!='$')
	{
		fputc(ch,fp1);
	}
	fclose(fp1);
	fp1=fopen("pps.c","r");
	if (fp1)
		printf("file responded");
	while((ch=fgetc(fp1))!=EOF)
	{
		fputc(ch,fp3);
	}
	fclose(fp1);
       
	while((ch=getchar())!='#')
	{
		fputc(ch,fp2);
	}
	fclose(fp2);
	fp2=fopen("spp.c","r");
	if(fp2)
		printf("file responded");
	while((ch=fgetc(fp2))!=EOF)
	{
		fputc(ch,fp3);
	}
	fclose(fp2);
}

