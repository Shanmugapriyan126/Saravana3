#include<stdio.h>
void main()
{
    int X,Y;
    printf("Enter the Number:");
    scanf("%d",&X);
    while(X!=1)
    {
        Y=X%2;
        if(Y!=0)
        {
            printf("Not a power of 2");
            break;
        }
        X=X/2;
    }
    if(X==1)
    {
        printf("It is a power of 2");
    }
}
