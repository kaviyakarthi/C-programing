#include <stdio.h>
#include<string.h>

int main()
{
	char s[10];
	int i,flag=0;
	printf("Enter the string");
	scanf("%s",&s);
	for(i=0;i<10;i++)
	{
		if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
	             {
	            flag=1;
		break;	
		}
	}
	if(flag==1)
	printf("\nContain vowels");
	else
	printf("\nContain only consonant");
	
	return 0;
}
