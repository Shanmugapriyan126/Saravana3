#include <stdio.h>
void main()
{
    int n,a[100],i,sum=0;
    int M;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("\nEnter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    M=sum/n;
    printf("%d",M);
}
