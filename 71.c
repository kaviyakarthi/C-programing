#include <stdio.h>
#include<string.h>

int main(void)
{
	char s[10];
	int n,i,count=0;
	printf("Enter the string");
	scanf("%s",s);
	 n=strlen(s);
	  for(i=0;i<n;i++)
	  {
	  	if(s[i]==s[n-i-1])
	  	{
	  		count++;
	  	}
	  }
	  if (n==count)
	  printf("\nYes palindrome");
	  else
	  printf("\nNot palindrome");
	  
	
	

	return 0;
}
