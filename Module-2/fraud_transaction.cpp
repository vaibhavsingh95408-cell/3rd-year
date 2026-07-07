#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of IDs";
    cin>>n;
    int arr[n];
    cout<<"enter the IDs";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int suspiciousID;
    cout<<"enter the suspicious ID to search";
    cin>>suspiciousID;
    bool found=false;   

    for(int i=0;i<n;i++)
    {
        if(arr[i]==suspiciousID)
        {
            found=true;
            break;
        }
    }
    if (!found)
    {
        cout<<"ID not found";
    }
    else
    {
        cout<<"ID found";
    }

    return 0;
}