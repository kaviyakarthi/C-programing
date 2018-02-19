#include <stdio.h>
#include<string.h>

int main()
{
	char s[15]="hello world";
	int i,count=0;
	for(i=0;i<15;i++)
	{
		if(s[i]==' ')
		count++;
		
	}
	
	printf("No of words is %d",count+1);
	return 0;
}
