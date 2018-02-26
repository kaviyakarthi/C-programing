#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	while(n%10!=0)
	{
		n=++n;
	}
	printf("The nearest multiple of 10 is %d",n);

	return 0;
}
