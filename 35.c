#include <stdio.h>

int main()
{
	char str[30];
	int i=0,count=0;
	printf("Enter the string\n");
	scanf("%s",&str[i]);
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]>='1'&&str[i]<='9')
		count++;
	
	}
	printf("Number ofnumeric character is %d",count);
	
	return 0;
}
