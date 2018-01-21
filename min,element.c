#include<stdio.h>
int main()
{
int array[100],min,size,c,location=1;
printf("number of elements in array:");
scanf("%d",&size);
printf("enter the integer is %d",size);
for(c=0;c<size;c++)
{
scanf("%d",&array[c]);
min=array[0]
}
for(c=1;c<size;c++)
if(array[c]>min)
{
min=array[c];
location=c+1;
}
printf("min element in the location is %d and the value is %d",location,min);
return 0;
}
