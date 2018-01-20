#include<stdio.h>
int main()
{
int a1,a2,rem,i;
printf("enter the fist number for the range: ");
scanf("%d",&a1);
printf("enter the final number for the range: ");
scanf("%d",&a2);
for(i=a1;i<=a2;i++)
rem=i%2;
if(rem==0)
{
printf("enter the even number between %d and %d",a1,a2);
printf("%d\n",i);
}
return 0;
}
