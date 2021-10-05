#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;
    cin >> n;
    int a[n];
    int b[100] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }

    for (int i = 1; i <= 99; i++)
    {
        b[i] += b[i - 1];
    }

    int c[n];
    for (int i = n - 1; i >= 0; i--)
    {
        c[--c[a[i]]] = a[i];
    }

    for (int i = 0; i < 100; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}