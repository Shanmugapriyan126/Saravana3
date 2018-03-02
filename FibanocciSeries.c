#include<stdio.h>
void main()
{
  int i,A=0,B=1,C=0,N;
  printf("Enter the number :");
  scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        C=A+B;
        printf("%d \n",C);
        B=A;
        A=C;
    }
}
