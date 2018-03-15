#include <stdio.h>
void main() 
{
	int a,rem,rev=0;
	printf("enter the number:");
	scanf("%d",&a);
	while(a!=0)
	{
		rem=a%10;
		rev=(rev*10)+rem;
		a=a/10;
	}
	a=rev;
	while(a!=0)
	{
		rem=a%10;
		printf("%d ",rem);
		a=a/10;
	}
}
