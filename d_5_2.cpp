#include <bits/stdc++.h>
using namespace std;
int f = -1, r = -1, arr[6];
void enqueue(int a)
{
    if (r == 5)
    {
        cout << "::::::::::OVERFLOW::::::::::::" << endl;
    }
    else
    {
        if (f == -1 && r == -1)
        {
            f++;
            r++;
        }
        else
        {
            r++;
        }
        arr[r] = a;
    }
}
void dequeue()
{
    if (f == -1)
    {
        cout << "::::::::::UNDERFLOW::::::::::::" << endl;
    }
    else
    {
        if (f == r)
        {
            f = r = -1;
        }
        else
        {
            f++;
        }
    }
}
void dequeue1()
{
    for(int i=0;i<r;i++)
    {
        arr[i]=arr[i+1];
    }
    r--;
    f==0;

}
void peek()
{
    cout << arr[f];
}
void display()
{
    for (int i = 0; i < r; i++)
    {
        cout << arr[i] << ",";
    }
}
int main()
{   while(1)
    {cout <<endl<< "1)enqueue()" << endl;
    cout << "2)dequeue()" << endl;
    cout << "3)peek()" << endl;
    cout << "4)display()" << endl;
    cout << "5)dequeue_1" << endl;
    cout << "6)exit" << endl;
    int choise;
    cin >> choise;
    switch (choise)
    {
    case 1:
        int n;
        cin >> n;
        enqueue(n);
        break;
    case 2:
        dequeue();
        break;
    case 5:
        dequeue1();
        break;
    case 3:
        peek();
        break;
    case 4:

        display();
        break;
    case 6:

        return 0;
        break;

    default:
    cout<<"re Enter"<<endl;
        break;
    }
}
    return 0;
}
