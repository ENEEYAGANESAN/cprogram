#include<stdio.h>
int main()
{
int base,exponent;
int result;
printf("enter the base and exponent");
scanf("%d",&base and exponent);
while (exponent!=0)
{
result=result*base;
--exponent;
}
printf("result is %d",result);
return 0;
}
