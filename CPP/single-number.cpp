#include<iostream>

int singleNumber(vector<int>& A) 
{
    int x=0,i;
    for(i=0;i<A.size();i++)
    {
        x=x^A[i];
    }
    return x;
}
int main()
{
    vector<int>A{4,5,6,7,0,1,2};
    cout<<singleNumber(A);
}
