#include <stdio.h>
int main(void) 
{
	
   int y,d,i;
   int a=1,b=1;
   scanf("%d",&y);
   printf("%d\t%d",a,b);
   for(i=2;i<=y;i++)
   {
     d=a+b;
     a=b;
     b=d;
    printf("\t%d",a);
   }
   return 0;
   }
