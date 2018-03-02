#include<stdio.h>
void main()
{
    int a[10],i,t=0;
    printf("Enter the elements:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
            if(a[i]>t)
            {
                t=a[i];
            }
    }
    printf("The biggest value among them %d",t);
}
