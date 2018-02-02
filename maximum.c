#inlude<stdio.h>
#include<conio.h>
int main()
{
int a[100],max,size,c,location=1;
printf("enter the number of element");
scanf("%d",&size);
printf("enter the %d integers",size);
for(c=0;c<size;c++)
scanf("%d",&a[c]);
max=a[0];
for(c=1;c<size;c++)
{
if(a[c]>max)
{
max=a[c];
location=c+1;
}
}
printf("enter the location %d and the value %d",location,max);
return 0;
}
