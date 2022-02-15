#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	scanf("%[^\n]s", str);
	int i,up=0,lw=0;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			up++;
		}
		else if(str[i]>=97 && str[i]<=122)
		{
			lw++;
		}
	}
	if(up>lw)
	{
		printf("%s",strupr(str));
	}
	else if(up<lw)
	{
		printf("%s",strlwr(str));
	}
	else
	{
		printf("%s",str);
	}
}
