#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int kadane(int *arr,int n){
    int max_ending_here=arr[0];
    int res=arr[0];
    for(int i=1;i<n;i++)
    {
        max_ending_here=max(arr[i]+max_ending_here,arr[i]);
        res=max(max_ending_here,res);
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int res=kadane(arr,n);
    cout<<res;
}
