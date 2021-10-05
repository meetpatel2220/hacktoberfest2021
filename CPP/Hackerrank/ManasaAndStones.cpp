#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int sum = min(a, b) * (n - 1);
        if (a != b)
        {
            while (sum <= max(a, b) * (n - 1))
            {
                cout << sum << " ";
                sum += abs(b - a);
            }
        }
        else
        {
            cout << a * (n - 1);
        }

        cout << endl;
    }

    return 0;
}
