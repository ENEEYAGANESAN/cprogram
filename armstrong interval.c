#include<stdio.h>
int main()
{
int num,rem,sum=0,i,m=1,digits=0;
printf("enter the number in range");
scanf("%d%d",&num,&num);
for("num=1;num<=10;num++)
while(num>0)
{
num=num/10;
digits+=1;
}
while(num!=0)
rem=num%10;
num=num/10;
for(i=1;i<=digit;i++)
{
m=m*rem;
}
sum+=m;
m=1;
if(sum==num)
{
printf("enter the armstrong number between %d and %d\n",sum);
sum=0;
digit=0;
}
return 0;
}
