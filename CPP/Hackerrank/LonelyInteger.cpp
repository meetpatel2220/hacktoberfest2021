#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int frequency[101]={0};

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        frequency[num]++;
    }
    
    for (int i = 0; i < 101; i++)
    {
        if (frequency[i]==1)
        {
            cout << i;
        }
    }
    
    return 0;
}