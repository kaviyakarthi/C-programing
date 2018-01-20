#include <stdio.h>

int main()
{
	 int num1=1, num2=10, i, j, flag, temp, count =0;
	 
    printf("Prime numbers are \n");
    temp = num1;
    if ( num1 % 2 == 0)
    {
        num1++;
    }
    for (i = num1; i <= num2; i = i + 2)
    {
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if ((i % j) == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d\n", i);
            count++;
        }
    }
    

	return 0;
}
