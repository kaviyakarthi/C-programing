#include <stdio.h>
#include<string.h>

int main()
{
	char s[10];
	int i,n,count=0;
	scanf("%s",&s);
	n=strlen(s);
	for(i=0;i<6;i++)
	{
		if((s[i]=='1') ||(s[i]=='0'))
	{
		count++;

	}
		
	}
	if(count==n)
	printf("Yes binary");
	else
	printf("No");
	
	return 0;
}
