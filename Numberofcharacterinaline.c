#include <stdio.h>
void main() 
{
	char a[50];
	int i,count=0;
	printf("enter the sentence:");
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	{
		count=count+1;
	}
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			count=count-1;
		}
	}
	printf("\nthe number of characters in the line are:%d",count);
	return 0;
}
