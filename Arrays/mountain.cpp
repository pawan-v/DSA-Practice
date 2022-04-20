#include <bits/stdc++.h>

using namespace std;


// problem
// https://leetcode.com/problems/longest-mountain-in-array/

int mountain(vector<int> arr)
{
    int n = arr.size();
    int mcnt = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1] && arr[i] > arr[i - 1])
        {
            int cnt = 1;

            int j = i;
            while (j > 0 && arr[j] > arr[j - 1])
            {
                j--;
                cnt++;
            }
            while (i < n - 1 && arr[i] > arr[i + 1])
            {
                i++;
                cnt++;
            }
        mcnt = max(cnt, mcnt);
        }
    }
    return mcnt;
}

int main()
{
    vector<int> arr = {5, 6, 1, 2, 3, 4, 5, 3, 2, 0, -2, 4, 6};
    cout << mountain(arr) << endl;

    return 0;
}