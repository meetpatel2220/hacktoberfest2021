#include <bits/stdc++.h>
using namespace std;

string xorStrings (string s1, string s2) 
{
    string s3;
    int i=0, n=s1.length();
    while (i<n)
    {
        if (s1[i]==s2[i])
        {
            s3+='0';
        }
        else 
        {
            s3+='1';
        }
        i++;
    }
    return s3;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;

    string s4;
    cout << s4;
    
    return 0;
}