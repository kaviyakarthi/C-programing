#include <stdio.h>

int main()
{
	char ch[50]="Hello World";
	int count=0,i;
	for(i=0;ch[i]!=0;i++)
	{
		if(ch[i]==' ')
		count=++count;
		else
		count=count;
	}
	
		
	
	
	printf("NO.OF SPACES IS:%d",count);
	
	return 0;
}
