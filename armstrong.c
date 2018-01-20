#include<stdio.h>
int main()
{
int num,r,sum=0;
printf("enter the number");
scanf("%d",&num);
while(num!=0)
{
r=num%10;
num=num/10;
sum=sum(r*r*r);
}
if(sum==num)
{
printf("it is armstrong number");
}
else
{
printf("it is not armstrong number");
}
return 0;
}
