#include<stdio.h>
void main()
{
    int a,b,sum=0;
    printf("Enter the Number:");
    scanf("%d",&a);
    b=a;
    while(a!=0)
    {
        b=a%10;
        sum=sum+b;
        a=a/10;
    }
    printf("Sum value is %d",sum);
}
