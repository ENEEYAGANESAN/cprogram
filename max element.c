#include<stdio.h>
int main()
{
int array[100],max,size,c,location=1;
printf("number of elements in array:");
scanf("%d",&size);
printf("enter the integer is %d",size);
for(c=0;c<size;c++)
{
scanf("%d",&array[c]);
maximum=array[0]
}
for(c=1;c<size;c++)
if(array[c]>maximum)
{
maximum=array[c];
location=c+1;
}
printf("maximum element in the location is %d and the value is %d",location,maximum);
return 0;
}
