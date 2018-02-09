#include <stdio.h>
#include<string.h>

int main() 
{
	char s[30];
	int i,flag;
	scanf("%s",&s);
	for(i=0;s[i]!=0;i++)
	{
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
		flag=1;
		else if(s[i]>='1'&&s[i]<='9')
		flag=2;
		else
		flag=0;
		}
		if(flag=='1'&&flag=='2')
		printf("Yes contains both alph and num");
		else
		printf("No");
	
	return 0;
}
