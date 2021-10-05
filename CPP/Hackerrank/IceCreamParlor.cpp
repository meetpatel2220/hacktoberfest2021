#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) 
    {
        long long int m, n;
        cin >> m >> n;
        long long int arr[n];
        for (int i = 0; i < n; i++) 
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) 
        {
            for (int j = i+1; j < n; j++) 
            {
                if (arr[i] + arr[j] == m) 
                {
                    cout << i+1 << " " << j+1;
                    break;
                }       
            }
        }
        cout << endl;
    }
    return 0;
}
