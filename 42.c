#include<stdio.h>
int main()
{
char str1[20];
char str2[20];
int count1=0,count2=0,i;
printf("Enter the strings\n");
scanf("%s%s",&str1,&str2);
for(i=0;str1[i]!=0;i++)
{
  count1++;
}
for(i=0;str2[i]!=0;i++)
{
  count2++;
}
if(count1>=count2)
{
  printf("%s",str1);
}
else
{
  printf("%s",str2);
}
}
