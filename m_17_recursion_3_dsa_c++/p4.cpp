#include<bits/stdc++.h>
using namespace std;



void print(vector<int>&a,int idx)
{
    if(idx==a.size()) return;
    print(a,idx+1);
    cout<<a[idx]<<" ";
}

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    print(a,0);
}



/*----------------QUESTION  --------------------
print all the element of an array in reverse order

*/