#include<stdio.h>
#include<string.h>
void main()
{
	char str[200];
	int i,count=0;
	scanf("%[^\n]s", str);
	for(i=1;i<strlen(str);i++)
	{
		if(str[i]>=97 && str[i]<=122)
		{
			if(str[i-1]>=65 && str[i-1]<=90 && str[i+1]>=65 && str[i+1]<=90)
			{
				count++;
			}
		}
	}
	printf("%d",count);
}
