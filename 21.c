#include <stdio.h>

int main()
{
	 int count= 1, n=3, d=1,i, a=1,sum,tn;
    printf("\nArithmetic Sequence From 1 To %d: \n", n);
    while(count <= n)
    {
        a = 1 + (count - 1) * d;
        printf("%d \t", a);
        count++;
    }
    printf("\n\n");
         sum = (n * (2 * a + (n - 1)* d ))/ 2;

     tn = a + (n - 1) * d;

     printf("Sum of the A.P series is: ");

     for (i = a; i <= tn; i = i + d )

     {

          if (i != tn)

               printf("%d + ", i);

          else

               printf("%d = %d ", i, sum);

     }
	
	return 0;
}
