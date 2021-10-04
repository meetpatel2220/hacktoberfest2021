/**
 * Given two strings 
 * Find the minimum number of operations that need to be performed 
 * on str1 to convert it to str2. The possible operations are:
    Insert a character at any position of the string.
    Remove any character from the string.
    Replace any character from the string with any other character.
 * */

#include <bits/stdc++.h>
using namespace std;
int dp[101][101];
int lcs(string s,string t,int m,int n)
{
    if(dp[m][n]!=-1)
    return dp[m][n];
    
    if(m==0 )
    return dp[m][n]=n;
    
    if(n==0 )
    return dp[m][n]=m;
    
    dp[m][n]=INT_MAX;
    
    if(s[m-1]!=t[n-1])
    return dp[m][n]= 1+min(min(lcs(s,t,m-1,n-1),lcs(s,t,m-1,n)),lcs(s,t,m,n-1));
    else 
    return dp[m][n]= lcs(s,t,m-1,n-1);
    
}
int editDistance(string s, string t) {
    memset(dp,-1,sizeof(dp));
    int k=lcs(s,t,s.length(),t.length());  
    return k;
}

int main() 
{
    
    string s, t;
    cout<<"enter two strings:\n";
    cin >> s >> t;
    int ans = editDistance(s, t);
    cout <<"no. of operation : " <<ans << "\n";
    
    return 0;
}
  