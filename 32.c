#include <stdio.h>

int main()
{
	char ch[50]="Hello World";
	int count=0,i,words;
	for(i=0;ch[i]!=0;i++)
	{
		if(ch[i]==' ')
		count=++count;
		else
		count=count;
	}
	
		words=count+1;
	
	
	printf("NO.OF WORDS IS:%d",words);
	
	return 0;
}
