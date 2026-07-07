#include<iostream>
using namespace std;

int main()
{
    for(int i=3;i<=7;i++)
    {
        // spaces
        for(int k=0;k<i-3;k++)
        {
            cout<<" ";
        }

        // numbers
        for(int j=0;j<8-i;j++)
        {
            cout<<i<<" ";
        }

        cout<<endl;
    }
}