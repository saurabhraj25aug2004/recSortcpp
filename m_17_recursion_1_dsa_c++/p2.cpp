#include<iostream>
using namespace std;

void print(int x,int n)
{
    if(x>n) return;
    if(x%2!=0) cout<<x<<" ";
    print(x+1,n);
}




int main()
{
int a,b;
cout<<"Enter two number: ";
cin>>a>>b;
print(a,b);

    
}
/*------------------------QUESTION---------------------
: Write a program to calculate the sum of odd
numbers between a and b (both inclusive) using
recursion
Enter two number: 3 9
3 5 7 9


*/


