#include<stdio.h>
int main()
{
int time,sec,hr,min;
printf("enter the time");
scanf("%d",&time);
hr=sec/3600;
min=time/60;
printf("%d%d%d",&sec,&hr,&min);
return 0;
}
