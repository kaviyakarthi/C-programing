#include<iostream.h>
int main()
{
int h1,m1,h2,m2;
h2=+h1;
m2=+m1;
if(m2>=60)
{
++h2;
 m2=-60;
}
cout<<"time %d:%d"<<h2<<m2;
return 0;
}
