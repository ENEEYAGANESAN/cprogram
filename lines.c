#include <stdio.h>
#include<string.h>
int main() 
{
	char a[100]="super.bye";
	 int i,count=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='.')
			count++;
	}
	printf("no.of lines %d",count+1);
	return 0;
}
