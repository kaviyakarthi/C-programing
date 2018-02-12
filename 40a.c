#include <stdio.h>

int main()
{
	int a=1,b=1,n,c;
	scanf("%d",&n);
	printf("%d %d",a,b);
	while(n-1>1)
	{
		c=a+b;
		a=b;
		b=c;
		printf(" %d",c);
		n--;
	}
	
	return 0;
}
