#include "iostream"

using namespace std;
int main()
{
    int n,x,a;
    cout << "Enter Length of array :";
    cin >> n;
    int arr1[n];
    cout << "Enter element of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    
    int count,low,high;
    while(low<=high)
    {
            int mid = (high+low)/2;
            x=mid;
        count = 0;
        for (int k = 0; k < n; k++)
        {
            if (arr1[k] >= x)
                {count++;}
        }
        if (x == count)
        {
            a=1;
            break;
        }
        else if (x<count)
        {
            low =mid+1;
        }
        else
        {
            high=mid-1;
        }

    }
    if(a==1)
    {
        cout<<endl<<x;
    }
    else{
    cout<<endl<<-1;
    }

    }

