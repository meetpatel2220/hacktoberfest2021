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

    sort(a, a+n);
    int sum = a[0]+ 4;
    int i=0;
    int container=1;
    while (i<n)
    {
        if (a[i]>sum)
        {
            sum = a[i]+4;
            container++;
        }
        i++;
    }
    
    cout << container;
    
    return 0;
}