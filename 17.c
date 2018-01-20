#include <stdio.h>

int main()
{
	int n=371, temp, remainder, result = 0;

  temp=n;

    while (temp != 0)
    {
        remainder = temp%10;
        result += remainder*remainder*remainder;
        temp /= 10;
    }

    if(result == n)
        printf("yes");
    else
        printf("no");

	return 0;
}
