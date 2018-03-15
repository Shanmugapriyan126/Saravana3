#include <stdio.h>
void main() 
{
	int a[100];
	int i,n,B,A;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("\n the array elements are:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	B=a[0];
	A=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>B)
		{
			B=a[i];
		}
		if(a[i]<A)
		{
			A=a[i];
		}
	}
	printf("\nMaximum value is %d",A);
	printf("\nMinimum value is %d",B);
}
