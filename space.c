#include<stdio.h>
int main()
{
char str[100];
int i,count=0;
printf("enter the string");
gets(str);
for(i=0;str[i];i++)
if(str[i]==' ')
{
printf("number of space in word %d",count);
}
return 0;
}
