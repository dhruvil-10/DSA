#include"bits/stdc++.h"

using namespace std;

int main ()
{
    //srand(time(0));
    int n ;
    cin>>n;//=5 + rand()%(15-5+1);
    int arr1[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr1[i];
    }
    

    
sort(arr1, arr1 + n);    

    // cout<<"[";
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr1[i];
    //     if(i!=n-1) cout<<",";

    // }
    // cout<<"]";
    // cout<<"\nwhich number you want to search :";
    int key;
    cin>>key;
// SEARCH FOR KEY ON WHICH INDEX
    int low  =  0,high = n-1,ans ;

    while(low<=high)
    {
            int mid = (high+low)/2;
        if(arr1[mid]==key)
        {
            ans=mid;
           // goto l1;
           break;
        }
        if(arr1[mid]<key)
        {
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
   


cout<<ans;//<<"\" INDEX";

    return 0;
}