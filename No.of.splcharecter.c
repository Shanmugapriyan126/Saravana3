#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int i,n,b=0;
    printf("Enter the sentence:");
    scanf("%[^\t\n]s",a);
    n=strlen(a);
	for(i=0;i<n;i++)
	{
	   if(a[i]>='0'&&a[i]<='9')
	    {
	        b++;
	    }
	    else
	    {
	        continue;
	    }
	}
	printf("No.of numeric characters:%d",b);
	return 0;
}
