#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b,n=1;
  printf("enter value a");
  scanf("%d",&a);
  printf("enter value b");
  scanf("%d",&b);
  while(b!=0)
        {
          n*=a;
          --b;
        }
        printf("n=%d",n);
return 0;
}
