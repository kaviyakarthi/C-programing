#include <stdio.h>
 
int main()
{
int n=548;
int count=0;
while(n!=0)
{
	n=n/10;
	++count;
}
printf("%d no of digits",count);
 
	return 0;
}
