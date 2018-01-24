#include <stdio.h>

int main()
{
	char ch[50]="laptop is good";
	int count=0,i;
	for(i=0;ch[i]!=0;i++)
	{
		if(ch[i]==' ')
		count=count;
		else
		count++;
		
	}
	printf("NO.OF CHARACTER IS:%d",count);
	
	return 0;
}
