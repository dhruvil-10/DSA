#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cout << "Enter Length of array :";
    cin >> n;
    int arr1[n];
    cout << "Enter element of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
        // arr1[i]=1 + rand()%(200);
    }
    sort(arr1, arr1 + n);
    cout << "[";

    for (int i = 0; i < n; i++)
    {
        cout << arr1[i];
        if (i != n - 1)
            cout << ",";
    }
    cout << "]";
    cout << "\nwhich number you want to search :";
    int key;
    cin >> key;
    // SEARCH FOR KEY ON WHICH INDEX
    int low = 0, high = n - 1, mid1, mid2;

    while (low <= high)
    {
        mid1 = low + (high - low) / 3;
        mid2 = high - (high - low) / 3;
        if (arr1[mid1] == key)
        {
            cout<<mid1;
            return 0;
        }
        else if (arr1[mid2] == key)
        {
            cout<<mid2;
            return 0;
        }
        else if (arr1[mid1] > key)
            high = mid1 - 1;
        else if (arr1[mid2] < key)
            low = mid2 + 1;
        else
        {
            high = mid2 - 1;
            low = mid1 + 1;
        }
    }
    return 0;
}