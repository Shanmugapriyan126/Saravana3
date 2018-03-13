#include<stdio.h>
#include<string.h>
void main()
{
    char a[20],b[20];
    int A,B,i,sum1=0,sum2=0;
    printf("Enter the string:");
    scanf("%s",a);
    scanf("%s",b);
    A=strlen(a);
    B=strlen(b);
    for(i=0;i<A;i++)
    {
        sum1=sum1+a[i];
    }
    for(i=0;i<B;i++)
    {
        sum2=sum2+b[i];
    }
    if(sum1>sum2)
    {
        printf("%s",a);
    }
    else if(sum2>sum1)
    {
        printf("%s",b);
    }
    else
    {
        printf("%s",a);
    }
}
