#include "bits/stdc++.h"

using namespace std;

// Function to check and print pairs
bool findPairs(vector<int> &arr, int k)
{
    unordered_map<int, int> remainderCount;
    int n = arr.size();

    // Count occurrences of each remainder when divided by k
    for (int num : arr)
    {
        int rem = num % k;
        remainderCount[rem]++;
    }
    // Check if pairs can be formed
    for (int i = 0; i < n; i++)
    {
        int rem = arr[i] % k;

        // Check pairs with remainder 0
        if (rem == 0)
        {
            if (remainderCount[rem] % 2 != 0)
            {
                return false;
            }
        }
        // Check pairs where both remainders are k/2
        else if (2 * rem == k)
        {
            if (remainderCount[rem] % 2 != 0)
            {
                return false;
            }
        }
        // Check pairs where remainders sum up to k
        else
        {
            if (remainderCount[rem] != remainderCount[k - rem])
            {
                return false;
            }
        }
    }

    // If valid pairs can be formed, print them
    vector<bool> used(n, false);
    for (int i = 0; i < n; i++)
    {
        if (used[i])
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (!used[j] && (arr[i] + arr[j]) % k == 0)
            {
                cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
                used[i] = used[j] = true;
                break;
            }
        }
    }

    return true;
}

int main()
{
    int n, k;
    cin >> n;

    if (n <= 0 || n > 20)
    {
        cout << "Invalid input size" << endl;
        return -1;
    }

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> k;

    if (!findPairs(arr, k))
    {
        cout << -1 << endl;
    }

    return 0;
}