#include<iostream>
using namespace std;
int main()
{
    for (int i=5;i>0;i--)
    {
        //space printing 
        for (int k = 0; k < 5- i; k++)
        {
            cout << " ";
        }
        //star printing 
        for (int j=0;j<i+(i-1);j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }

}