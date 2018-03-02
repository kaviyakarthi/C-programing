#include<stdio.h>
#include<string.h>

int main() 
{
    char s[10];
    int n;
    printf("Enter the string");
    scanf("%s",s);
    n=strlen(s);
    if(n%2==0)
    {
        s[n/2]='*';
        s[n/2-1]='*';
        printf("\n%s",s);
    }
    else
    {
        s[n/2]='*';
        printf("\n%s",s);
    }
  return 0;
}
