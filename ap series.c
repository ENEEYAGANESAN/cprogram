#include<stdio.h>
int main()
{
int a,d,n,i,f,sum=0;
printf("enter the first number in ap series:");
scanf("%d",&a);
printf("enter the total number in ap series:");
scanf("%d",&n);
printf("enter the common difference in ap series:");
scanf("%d",&d);
sum=(n*(2*a+(n-1)*d))/2;
f=a+(n-1)*d;
printf("sum of series in ap:");
for(i=a;i<=f;i=i+d)
{
if(i!=f)
{
printf("%d+",i);
}
else
{
printf("%d=%d",i,sum);
}
}
return 0;
}
