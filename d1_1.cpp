#include"iostream"
#include"string.h"
#include"stdio.h"
using namespace std;
int main ()
{
        int i=0,max=0,count=0;

    string str1;
    //cout<<"Enter string :";
    getline(cin,str1);
        int len = str1.length();
    while(i<len)
    {
        if(str1[i]!=' ')
            {
                count++;
                i++;
            }
            else
            {
                if(max<count){max=count;}
                count=0;
                i++;
            }
       
    }
    cout<< max ;
    return 0;
}
