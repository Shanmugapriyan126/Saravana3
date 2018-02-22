#include<stdio.h>
void main()
{
    int A,B,C,D,E,F,G,H,I;
    printf("enter time in hours and minutes");
    scanf("%d%d",&A,&C);
    printf("enter second time in hours and minutes");
    scanf("%d%d",&B,&D);
    E=A*60+B;
    F=C*60+D;
    G=E-F;
    H=G/60;
    I=G%60;
    printf("the difference in time is %d:%d",H,I);
}
