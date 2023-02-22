#include<stdio.h> 
struct student
{
	 
		 int rno,marks,age;
		 char name[20];
	       
}s;
void main()
{
   struct student st1,st2; 
   printf("\n enter name of first student:");
   gets(st2.name);
   printf("\n enter rno,marks,age of first student:");
   scanf("%d %d %d",&st2.rno,&st2.marks,&st2.age);
   printf("\n");
   puts(st2.name);
   printf("\n %d %d %d",st2.rno,st2.marks,st2.age);

	 printf("\n enter the name of second :");
	 scanf("%s",&st1.name);
	 printf("\n enter the rno,marks,age:");
	 scanf("%d %d %d",&st1.rno,&st1.marks,&st1.age);
	 printf("\n");
	 printf("\n%s",st1.name);
	 printf("\n %d %d %d",st1.rno,st1.marks,st1.age);
 }	 
