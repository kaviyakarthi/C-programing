#include <stdio.h>

int main()
{
	int a=150,b=160;
	a=a^b;
	b=a^b;
	a=a^b;
	printf("%d %d",a,b);
	return 0;
}
