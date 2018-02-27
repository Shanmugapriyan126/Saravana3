#include <stdio.h>
void main()
{
	char A[50];
	int i,count=1;
	printf("Enter the sentence:");
	scanf("%[^\n]s",A);
	for(i=0;A[i]!='\0';i++)
	{
		if(A[i]=='.')
		{
			count=count+1;
		}
	}
	printf("\nno of lines is=%d",count);
	return 0;
}
