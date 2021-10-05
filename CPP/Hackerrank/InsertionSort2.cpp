#include <bits/stdc++.h>
using namespace std;

void print(int a[], int n)
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

    for (int i = 1; i < n; i++)
    {   
        int current = a[i];
        int j = i-1;
        while (j>=0 && a[j]>current)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
        print(a, n);
        cout << "\n";
    }

    return 0;
}