#include<iostream>
using namespace std;

void rev(int r,int n)
{
    if(n==0) {
        cout<<r;
        return;
    }
    r *=10;
    r +=(n%10);
    n /=10;
    rev(r,n);
}



int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    rev(0,n);
}








/*---------------------------QUESTION---------------------------
calculate reverse of a number using recursion.
*/