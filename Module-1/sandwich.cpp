#include<iostream>
using namespace std;

int main()
{
    // upper half
    for(int i=1;i<=3;i++)
    {
        for(int s=1;s<i;s++)
            cout<<" ";

        for(int j=1;j<=5-2*(i-1);j++)
            cout<<i+2<<" ";

        cout<<endl;
    }

    // lower half
    for(int i=2;i>=1;i--)
    {
        for(int s=1;s<i;s++)
            cout<<" ";

        for(int j=1;j<=5-2*(i-1);j++)
            cout<<i+2<<" ";

        cout<<endl;
    }

    return 0;
}