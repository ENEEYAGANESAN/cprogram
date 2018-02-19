#include<stdio.h>
#include<conio.h>
int main()
{
int m,n;
printf("enter the number");
scanf("%d%d",&m,&n);
printf("after swapping the value:%d%d",m,n);
m=m^n;
n=m^n;
m=m^n;
printf("before swapping the value:%d%d",m,n);
return 0;
}
