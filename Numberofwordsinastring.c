#include<stdio.h>
#include<string.h>
void main()
{
    char A[20];
    int N=1,i;
    printf("enter the string :");
    scanf("%[^\n]s",A);
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]==' ')
        N++;
    }
    printf("The words in sentence : %d",N);
}
