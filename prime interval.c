#include<stdio.h>
int main()
{
int a,b,i,flag;
printf("enter the two number in interval");
scanf("%d%d",&a,&b);
while(a<b)
flag=0;
for(i=2;i<=a/2;i++)
{
if(a%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("enter the prime number between %d and %d\n",i)
++a;
}
return 0;
}
