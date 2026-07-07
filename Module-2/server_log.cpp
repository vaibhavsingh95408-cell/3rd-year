#include<iostream>
using namespace std;
int main()
{
    int serverIDs;
    cout<<"enter the number of IDs";
    cin>>serverIDs;

    int arr[serverIDs];
    cout<<"enter the IDs";
    for(int i=0;i<serverIDs;i++)
    {
        cin>>arr[i];
    }

    int IDtoSearch;
    cout<<"enter the  ID to search";
    cin>>IDtoSearch;

    int low=0;
    int high=serverIDs-1;
    bool found=false;

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==IDtoSearch)
        {

            found=true;
            cout<<"ID found";
            break;
        }
        else if(arr[mid]<IDtoSearch)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(!found)
    {
        cout<<"ID not found";
    }
    return 0;




}