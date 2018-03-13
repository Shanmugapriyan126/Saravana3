#include<stdio.h>
void main()
{
    int N;
    printf("Enter the number:");
    scanf("%d",&N);
    if(N>=1&&N<=10)
    {
        printf("Yes it is in Range");
    }
    else
    {
        printf("No it is not in Range");
    }
}
