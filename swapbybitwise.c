#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the A and B value:");
    scanf("%d%d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("The swapped A and B values:%d\t%d",a,b);
}
