#include<iostream>
using namespace std;
int main()
{
int a=1,*p;
{int a=2;
p=&a;
cout<<a;
}
cout<<*p;
return 0;
}
