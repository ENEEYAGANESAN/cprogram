#include<stdio.h>
int main()
{
char b[200];
int count=0,i;
printf("enter the string");
scanf("%d",&b);
for(i=0;b[i]!='\0';i++)
{
if(b[i]==' ')
count++;
}
printf("number of words:%d",count+1);
return 0;
}
