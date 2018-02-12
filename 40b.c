#include <stdio.h>

int main()
{
	int fe=1,se=1,n,c;
	scanf("%d",&n);
	printf("%d %d",fe,se);
	while(n-1>1)
	{
		c=fe+se;
		fe=se;
		se=c;
		printf(" %d",c);
		n--;
	}
	
	return 0;
}
