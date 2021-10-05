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
    int flag=0;
    sort(a, a + n, greater<int>());
    int maximumPerimeter = 0;
    for (int i = 0; i < n - 2; i++)
    {
        if (a[i] < a[i + 1] + a[i + 2])
        {
            cout << a[i+2] << " " << a[i+1] << " " << a[i];
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        cout << "-1";
    }
    
    return 0;
}