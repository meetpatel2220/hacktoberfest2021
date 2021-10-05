#include <bits/stdc++.h>
using namespace std;

void print(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

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

    int temp = a[n - 1];
    int j = n - 2;
    while (j >= 0 && a[j] > temp)
    {
        a[j + 1] = a[j];
        j--;
        print(n, a);
        cout << "\n";
    }
    a[j + 1] = temp;
    print(n, a);
    return 0;
}