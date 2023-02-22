#include<stdio.h>
void main()
{
      int amount=600,a,b,c,d;
      a=amount/500;
      b=amount%500/100;
      c=amount%500%100/50;
      printf("\n %dnotes of 500\n %dnotes of 100\n %dnotes of 50",a,b,c);
}      


