#include<stdio.h>
#include<conio.h>
int main()
{
char a[10];
int b[20];
printf("enter the number and character");
scanf("%d%c",&a,&b);
if((b>=1) && (b<=10) && (a>='a') && (a<='z'))
{
printf("it has both alphabet and number");
}
else
{
printf("it not have alphabet and number");
}
return 0;
}
