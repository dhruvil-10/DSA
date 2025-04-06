#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cout << "Enter Length of array :";
    cin >> n;
    int arr1[n];
    // input
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    int count = 0, j = 0, x = 0;

    for (j = 0; j <= n; j++)
    {

        for (int k = 0; k < n; k++)
        {
            if (arr1[k] >= j)
            {
                count++;
            }
        }
        int num = count;
        if (j == num)
        {
            x = 1;
            break;
        }
        count = 0;
    }
    if (x == 1)
    {
        cout << j;
    }
    else
        cout << -1;
}
