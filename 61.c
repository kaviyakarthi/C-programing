#include <stdio.h>
#include<string.h>

int main()
{
	char s[10];
	int k,i;
	printf("Enter no of character to be printed\n");
	scanf("%d",&k);
	scanf("%s",&s);
	for(i=0;i<k;i++)
	{
	printf("%c",s[i]);
	}
	return 0;
}
