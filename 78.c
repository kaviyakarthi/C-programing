#include <stdio.h>

int main(void) {
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	if(n%13==0)
	printf("\nYes multiple of 13");
	else
	printf("\nNo");
	return 0;
}
