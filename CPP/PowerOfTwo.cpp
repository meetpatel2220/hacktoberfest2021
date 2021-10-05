// Program to check given number is power of two.
// Time Complexity -- O(1)
#include<bits/stdc++.h>
using namespace std;
bool power(int num)
{
	return n && (!(n&(n-1)));
}
int main()
{
  int n;
  cout<<"Enter any number : ";
  cin>>n;
  if(power(n))
    cout<<"Power of 2";
  else
    cout<<"Not Power of 2";
  return 0;
}
