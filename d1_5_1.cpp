#include<iostream>

using namespace std;

int main()
{
    int n1, n2;
    
    cout << "enter how many row you want to make :";
    cin >> n1;
    cout << "enter how many column you want to make :";
    cin >> n2;
    cout << "Enter Matrix element \n";
    int matrix[n1][n2];
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cout<<"enter matrix["<<i+1<<"]["<<j+1<<"] : ";
            cin >> matrix[i][j];
        }
    }
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            
            cout<< matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"enter search element : ";
    int key;
    cin>>key;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(matrix[i][j]==key)
            cout<< matrix[i][j]<<"is on matrix["<<i+1<<"]["<<j+1<<"]\n";
        }
        cout<<endl;
    }

    return 0;
}