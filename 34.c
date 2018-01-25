#include <stdio.h>

int main()
{
	char ch[50]="Hello world.Goodbye";
	int i,count=0,line;
	for(i=0;ch[i]!=0;i++)
	{
		if(ch[i]=='.')
		count=++count;
		else
		count=count;
	}
	line=count+1;
	printf("No.of lines %d",line);
	return 0;
}
