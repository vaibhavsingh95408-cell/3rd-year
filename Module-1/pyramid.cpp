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
        //space
        for (int l=0;l<5-i-1;l++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}