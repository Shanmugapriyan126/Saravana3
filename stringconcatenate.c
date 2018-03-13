#include <stdio.h>
#include<string.h>
void main() 
{
	char a[50],b[50];
	int i,j;
	printf("enter the string A:");
	scanf("%s",a);
	printf("\n enter the string B:");
	scanf("%s",b);
	for(i=0;a[i]!='\0';i++)
	{
		
	}
	for(j=0;b[j]!='\0';j++)
	{
		a[i]=b[j];
		i++;
	}
	a[i]='\0';
	printf("\n%s",a);
}
