#include<stdio.h>
int main()
{
    int a,b,t=0;
    printf("enter the value");
    scanf("%d%d",&a,&b);
    printf("before swapping number is:%d%d",a,b);
    {
      t=a;
      a=b;
      b=t;
    }
printf("after swapping number is:%d%d",a,b);
return 0;
}
