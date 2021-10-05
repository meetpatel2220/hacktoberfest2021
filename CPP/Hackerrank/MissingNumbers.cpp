#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int frequency[2*100001]={0};

    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        frequency[num]++;
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int num;
        cin >> num;
        frequency[num]--;
    }
    
    for (int i = 1; i <= 2*100000; i++)
    {
       if (frequency[i]!=0)
       {
           cout << i << " ";
       }  
    }  
    return 0;
}