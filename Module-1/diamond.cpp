#include<iostream>
using namespace std;
int main()
{
    for (int i=0;i<5;i++)
    {
        //space 
        for (int j=0;j<5-i-1;j++)
        {
            cout<<" ";
        }
        //star
        for (int k=0;k<i+(i+1);k++)
        {
            cout<<"*";
        }
        cout<<endl;
        
       
    }
    for (int i=4;i>0;i--)
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