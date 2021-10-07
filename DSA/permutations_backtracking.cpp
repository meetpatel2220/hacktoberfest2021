/*
distinct integers are given, you have to find all the possible permutations
[1,2] = return [2,1],[1,2]
 */

#include "bits/stdc++.h"

using namespace std;

vector<vector<int>> ans;

void solve(vector<int> nums, vector<vector<int>> &ans, int idx)
{
    if (idx == nums.size())
    {
        ans.push_back(nums);
        return;
    }
    // WITH DUPLICATES
    /* for (int i = idx; i < nums.size(); i++)
    {
        swap(nums[i], nums[idx]); //for dry run check gfgs video if forgotten and the pic in this folder, horizontal forward is with forloop and vertical with recursion
        solve(nums, ans, idx + 1);
        swap(nums[i], nums[idx]); // backtracking
    } */

    // WITHOUT DUPLICATES
    for (int i = idx; i < nums.size(); i++)
    {
        if (i != idx and nums[i] == nums[idx])
            continue;
        swap(nums[i], nums[idx]);
        solve(nums, ans, idx + 1);
    }
}

vector<vector<int>> permuteUnique(vector<int> nums)
{
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    solve(nums, ans, 0);
    return ans;
}

int main()
{
    vector<vector<int>> res = permuteUnique({3, 1, 3});

    // shortcut for with duplicates and without duplicates

    /* int n;
    cout << "enter the size: ";
    cin >> n;
    vector<int> res(n);
    for (auto &i : res)
    {
        cin >> i;
    }
    sort(res.begin(), res.end());
    do
    {
        ans.push_back(res);
    } while (next_permutation(res.begin(), res.end())); // next_permutation() -> checks is there any more permutation possible or not

    for (auto i : ans)
    {
        for (auto ii : i)
        {
            cout << ii << " ";
        }
        cout << "\n";
    } */

    for (auto i : res)
    {
        for (auto ii : i)
        {
            cout << ii << " ";
        }
        cout << "\n";
    }
    return 0;
}
