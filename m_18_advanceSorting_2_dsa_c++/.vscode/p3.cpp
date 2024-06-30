#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int idx1=-1,idx2=-1;

    for(int i=0;i<n-1;i++)
    {
        if(a[i] > a[i+1])
        {
            if(idx1==-1) {
                idx1 =i;
                idx2 =i+1;
            }
            else idx2 =i+1;
        }
    }

    swap(a[idx1] ,a[idx2]);

    for(auto x:a) cout<<x<<" ";
}










/*---------------Qustion------------------
Given an array where all its elements are sorted in increasing order except two swapped 
elements, sort it in linear time. Assume there are no duplicates in the array.
Input: A[] = [3, 8, 6, 7, 5, 9, 10]
Output: A[] = [3, 5, 6, 7, 8, 9, 10]
*/