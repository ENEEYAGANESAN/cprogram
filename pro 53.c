#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0,rem;
    printf("enter the integer");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
    sum=sum+rem;
    n=n/10;
    }
    printf("sum of all digits %d",sum);
return 0;
}
