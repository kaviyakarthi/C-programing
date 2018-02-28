#include <stdio.h>

int main(void) {
	int n,i;
	printf("Enter the number");
	scanf("%d",&n);
	printf("\nThe factors of %d are",n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		printf(" %d",i);
	}
	return 0;
}
