#include<stdio.h>
int main()
{
    char x[100],c;
    int d=1;
    printf("Enter the characters:");
    scanf("%d",&x);
    c=getstr(x);
    for(int i=0;x[i]!='\0';i++)
    {
        if(x[i]!=' ')
        d++;
    }
    printf("%d",d);
    return 0;
}
