#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,temp;
printf("enter the two value of a and b");
scanf("%d%d",&a&b);
printf("before swapping is a=%d b=%d");
{
temp=a; 
a=b;
b=temp;
}
printf("after swapping is a=%d b=%d");
return 0;
}
