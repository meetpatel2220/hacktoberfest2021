#include<bits/stdc++.h>
#include<cmath>
 
using namespace std;

bool isPalindrome(int num)
{
    int n=num,number=0;

    while(n>0)
    {
        number=number*10+n%10;
        n/=10;
    }

    if(number==num)
    return true;

    return false;
}

int findPalindromic(vector<int>arr,int k)
{
    int num=0;

    for(int i=0;i<k;i++)
    {
        num=num*10+arr[i];
    }

    if(isPalindrome(num))
    return 0;

    for(int i=k;i<arr.size();i++)
    {
        num=(num%(int)pow(10,k-1))*10+arr[i];
        if(isPalindrome(num))
        return i-k+1;
    }

    return -1;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  vector<int> arr={2,3,5,1,1,5};

  int k=findPalindromic(arr,4);
  if(k==-1)
  cout<<"Palindromic subarray doesnt exist";
  else
  {
    for(int i=k;i<k+4;i++)
    {
        cout<<arr[i]<<" ";
    }
  }
}
  