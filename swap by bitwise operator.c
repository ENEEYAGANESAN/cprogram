#include<stdio.h>
#include<conio.h>
int main()
{
int i,j;
printf("enter the two value");
scanf("%d%d",&i&j);
printf("before swapping i=%d j=%d",i,j);
{
i=i^j;
j=i^j;
i=i^j;
}
printf("after swapping i=%d j=%d",i,j);
return 0;
}
