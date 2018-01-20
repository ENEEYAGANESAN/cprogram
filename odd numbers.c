#include<stdio.h>
int main()
{
int a,b,i,rem;
printf("enter the first number for the range: ");
scanf("%d",&a);
printf("enter the final number for the range: ");
scanf("%d"&b);
for(i=a;i<=b;i++)
rem=i%2;
if(rem==0)
{
printf("enter the odd number between %d and %d",a,b);
printf("%d\n",i);
}
return 0;
}
