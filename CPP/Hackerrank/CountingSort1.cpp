#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;
    cin >> n;
    int a[n];
    int b[100]={0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }

    for (int i = 0; i < 100; i++)
    {
        cout << b[i] << " ";
    }
    
    return 0;
}