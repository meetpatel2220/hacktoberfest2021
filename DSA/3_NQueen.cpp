#include <iostream>
using namespace std;

bool isSafe(int **arr, int x, int y, int size)
{
    for (int i = 0; i < x; i++)
    {
        if (arr[i][y] == 1)
        {
            return false;
        }
    }

    int row = x;
    int col = y;

    while (row >= 0 && col >= 0)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col--;
    }

    row = x;
    col = y;

    while (row >= 0 && col < size)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col++;
    }

    return true;
}

bool Nqueen(int **arr, int x, int size)
{
    if (x == size)
    {
        return true;
    }

    for (int col = 0; col < size; col++)
    {
        if (isSafe(arr, x, col, size))
        {
            arr[x][col] = 1;
            if (Nqueen(arr, x + 1, size))
            {
                return true;
            }
            arr[x][col] = 0;
        }
    }
    return false;
}

int main()
{
    int size = 4;
    int **arr = new int *[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = new int[size];
        for (int j = 0; j < size; j++)
        {
            arr[i][j] = 0;
        }
    }

    cout<<endl;
    if (Nqueen(arr, 0, size))
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}


// Leetcode Nqueens, vector string style

/* 
#include <iostream>
#include <vector>

using namespace std;
vector<vector<string>> ans;

bool isSafe(vector<string> &v, int x, int y, int size)
{
    for (int i = 0; i < x; i++)
    {
        if (v[i][y] == 'Q')
        {
            return false;
        }
    }

    int row = x;
    int col = y;

    while (row >= 0 && col >= 0)
    {
        if (v[row][col] == 'Q')
        {
            return false;
        }
        row--;
        col--;
    }

    row = x;
    col = y;

    while (row >= 0 && col <= size)
    {
        if (v[row][col] == 'Q')
        {
            return false;
        }
        row--;
        col++;
    }

    // or, an optimized algo, same way but less lines
    // for (int i = 0; i < x; i++)
    // {
    //     int offset = x - i;
    //     if (maze[i][col] == 'Q' || (y - offset >= 0 && maze[x - offset][y - offset] == 'Q') ||
    //         (y + offset < maze.size() && maze[x - offset][y + offset] == 'Q'))
    //     {
    //         return false;
    //     }
    // }
    
    return true;
}

void Nqueen(vector<string> &v, int x, int size)
{
    if (x == size)
    {
        ans.push_back(v);
        return;
    }

    for (int col = 0; col < size; col++)
    {
        if (isSafe(v, x, col, size))
        {
            v[x][col] = 'Q';
            Nqueen(v, x + 1, size);
            v[x][col] = '.';
        }
    }
}

vector<vector<string>> solveNQueens(int n)
{
    vector<string> x(n, string(n, '.'));
    Nqueen(x, 0, n);
    return ans;
}

int main()
{

    vector<vector<string>> v = solveNQueens(4);

    for (auto i : v)
    {
        for (auto i1 : i)
        {
            cout << i1 << " ";
        }
        cout << endl;
    }
    return 0;
}

 */