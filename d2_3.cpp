#include "bits/stdc++.h"
using namespace std;
int main()
{

    int arr[6] = {4, 6, 3, 2, 7, 2}, max = 0;
    for (int i = 0; i < 6; i++) // FIND MAX
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "arr :["; // PRINT
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i];
        if (i != 6 - 1)
            cout << ",";
    }
    cout << "]";

    cout <<"\n"<< max << endl;

    int arr1[max + 1];
    for (int k = 0; k <= max; k++) // GIVE 0 VALUE TO ALL ELEMENT
    {

        arr1[k] = 0;
    }

    for (int j = 0; j < 6; j++) // COUNTING FREQ.
    {
        arr1[arr[j]]++;
    }
    cout << "["; // PRINT
    for (int i = 0; i <= max; i++)
    {
        cout << arr1[i];
        if (i != max)
            cout << ",";
    }
    cout << "]";

    for (int f = 1; f <= max; f++)
    {
        arr1[f] = arr1[f] + arr1[f - 1];
    }

    cout << endl
         << "arr1 :["; // PRINT
    for (int i = 0; i <= max; i++)
    {
        cout << arr1[i];
        if (i != max)
            cout << ",";
    }
    cout << "]";
    int ans[6];

    for (int x=0;x<6;x++) // SORTING
    {

        ans[--arr1[arr[x]]] = arr[x];

    }

    cout << endl
         << "["; // PRINT
    for (int i = 0; i < 6; i++)
    {
        cout << ans[i];
        if (i != 6 - 1)
            cout << ",";
    }
    cout << "]";

    return 0;
}