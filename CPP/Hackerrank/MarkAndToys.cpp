#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    int count = 0;
    int sum = 0, i=0;
    while (1)
    {
        sum+=a[i];
        if (sum<=k)
        {
            count++;   
        }
        else
        {
            break;
        }
        i++;
    }
    cout << count;
    return 0;
}