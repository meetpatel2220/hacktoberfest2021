#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, page=0, spProblm=0, count=0;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        count=0;
        page++;
        for (int p = 1; p <= a[i]; p++)
        {
            count++;
            if (p==page)
            {
                spProblm++;
                // cout << spProblm << "-" << page << "-" << p << endl;
            }
            
            if (count==k)
            {
                if (p!=a[i])
                {
                    page++;
                }
                
                count=0;
            }

            // cout << spProblm;   
        }
    }
    cout << spProblm << "\n";
    return 0;
}