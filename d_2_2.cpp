
#include <iostream>

using namespace std;
int main ()
{
    
    int arr[6] = {6,5,4,3,2,1},min =0,x;
    for(int a=0;a<6;a++)
    {
        cout<<arr[a];
    }
    cout<<endl;
    for(int i =0 ; i<6;i++)
    {
        min = arr[i];
        for(int j=i;j<6;j++) //FIND THE MIN VALUE OF ARRAY
        {
            if(arr[j]<min)
            {
                min = arr[j];
                x=j;
            }
            
        }
        if(arr[i]==min)
        {
            continue;
        }
        else
        {
            int temp = arr[i];
            arr[i]= arr[x];
            arr[x] = temp;
        }
        
    }
    cout<<endl;
    for(int a=0;a<6;a++)
    {
        cout<<arr[a];
    }
    return 0;
    
}
