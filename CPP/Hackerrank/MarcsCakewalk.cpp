#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n, greater<int>());
    long long int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i]*pow(2, i);
    }
    cout << sum;
    return 0;
}