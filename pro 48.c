#include<stdio.h>
int main()
{
int i,sum=0,n;
printf("enter the n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum=sum+i;
}
sum=sum/n;
printf("the average value is:%d",sum);
return 0;
}
