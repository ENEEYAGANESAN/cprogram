#include<stdio.h>
int main()
{
int i,num,count=0;
printf("enter the number");
sacanf("%d",&num);
for(i=2;i<num;i++)
{
if(num%i==0)
{
count++;
break;
}
}
if(count==0)
{
printf("this is prime number")
}
else
{
printf("this is not prime number");
}
return 0;
}
