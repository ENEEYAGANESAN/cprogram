#include<stdio.h>
int main()
{
int i,n,d;
printf("enter the limit: ");
scanf("%d",&n);
printf("enter the number");
scanf("%d",&d);
for(i=1;i<=n;i++)
if(i%d==0)
{
printf("the multiples of number is %d\n",i);
}
return 0;
}
