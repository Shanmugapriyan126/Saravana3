#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the Number:");
    scanf("%d",&a);
    if(a%2==0)
    {
        b=a-2;
    }
    else
    {
        b=a-1;
    }
    printf("\n%d",b);
}
