#include<stdio.h>
void main()
{
    int n,i;
    char s[100];
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the character:");
    scanf("%s",&s);
    for(i=0;i<n;i++)
    {
        printf("\n%s",s);
    }
}
