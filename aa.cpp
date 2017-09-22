// Author :- Abhay Jeet Zutshi
#include<iostream> 
using namespace std;
int i=2;
int main()
{  // Scope starts
int *p; // Pointer used
{
int i=-1;
p=&i;
} // scope ends
cout<<*p<<&p<<endl; // Displays the value of variable inside the loop and its address
cout<<i<<&i<<endl;;
return 0; // Return the value
}

