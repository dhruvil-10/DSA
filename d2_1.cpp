#include"bits\stdc++.h"
using namespace std;

int main()
{
    int n,n1,count;

    cout << "Enter Length of array :";
    cin >> n;
    n1=n;
    int arr1[n];
    cout << "Enter element of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
        // arr1[i]=1 + rand()%(200);
    }
    
    cout << "Before sroting:  [";
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i];
        if (i != n - 1)
            cout << ",";
    }
    cout << "]";

        for(int i=0;i<n;i++)
        {
            for(int j = 0;j<n-i-1; j++)
            {
                count = 0;
                if(arr1[j]>arr1[j+1])
                {
                    int temp  =  arr1[j];
                    arr1[j]  = arr1[j+1];
                    arr1[j+1] = temp;
                    count = 1;
                }
                

            }
            if(count==0)
                {
                    goto l1;
                }

        }
        l1:
        cout << "\nAfter sroting : [";
    for (int i = 0; i < n1; i++)
    {
        cout << arr1[i];
        if (i != n1 - 1)
            cout << ",";
    }
    cout << "]";
    return 0;
}


// done (>_<) 