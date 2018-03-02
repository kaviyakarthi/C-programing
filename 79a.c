#include<stdio.h>
#include<math.h>

int main()
{
    int n,a,b,c;
    printf("Enter the numbers");
    scanf("%d %d",&a,&b);
    c=a*b;
    n=sqrt(c);
    if(n==0)
    printf("product of %d %d is perfect square",a,b);
    else
    printf("not perfect square");
    
    return 0;
}
