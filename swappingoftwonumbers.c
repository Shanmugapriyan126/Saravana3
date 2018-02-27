#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the A and B values:");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("The swapped A and B values:%d\t%d",a,b);
}
