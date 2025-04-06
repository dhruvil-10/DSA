#include"iostream"
using namespace std;
int main ()
{
    int n;

    //cout<<"enter how many digits you wants to input : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        //cout<<"enter "<<i+1<<" digit"<<endl;
        cin>>arr[i];
    }
    int i=0;
    int key;
    //cout<<"enter digit for search :";
    cin>>key;
    int j=0;
    while (key != arr[j])
    {
        j++;
    }
    
    cout<<j;
    
    return 0;
}