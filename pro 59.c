#include<stdio.h>
#include<conio.h>
int main()
{
int a[10],max,size,c;
printf("enter the number of elements in an array");
scanf("%d",&size);
printf("the number of integer :\n",size);
for(c=0;c<size;c++)
max=a[10];
for(c=1;c<size;c++)
if(a[c]>max)
{
max=a[c];
printf("the max value is:%d",max);
}
return 0;
}
