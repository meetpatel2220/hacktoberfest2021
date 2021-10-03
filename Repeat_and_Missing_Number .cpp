// C++ program to find the repeating
// and missing elements using Maps
#include <iostream>
#include <unordered_map>
using namespace std;
 
int main()
{
    int arr[] = { 4, 3, 6, 2, 1, 1 };
    int n = 6;
     
    unordered_map<int, bool> numberMap;
     
    for(int i : arr)
    {
        if (numberMap.find(i) ==
            numberMap.end())
        {
            numberMap[i] = true;
        }
        else
        {
            cout << "Repeating = " << i;
        }
    }
    cout << endl;
     
    for(int i = 1; i <= n; i++)
    {
        if (numberMap.find(i) ==
            numberMap.end())
        {
            cout << "Missing = " << i;
        }
    }
    return 0;
}
