#include<stdio.h>
int main()
{
int a[50],size,i,largest;
printf("\n enter the size of the array:");
scanf("%d,"&size);
printf(\n enter %d element of array:",size);
for(i=0;i<size;i++)
scanf("%d",&a[i]);
largest=a[0];
for(i=1;i<size;i++)
{
if(largest<a[i])
largest=a[i];
}
printf("\n largest element present in given array is:%d,"largest);
}
