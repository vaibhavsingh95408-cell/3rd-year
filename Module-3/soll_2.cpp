#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int left[n1], right[n2];

    for(int i = 0; i < n1; i++)
        left[i] = arr[low + i];

    for(int j = 0; j < n2; j++)
        right[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = low;

    while(i < n1 && j < n2)
    {
        if(left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }

    while(i < n1)
        arr[k++] = left[i++];

    while(j < n2)
        arr[k++] = right[j++];
}

void mergeSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int mid = (low + high) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

int main()
{
    int n;

    cout << "Enter number of orders: ";
    cin >> n;

    int arr[n];

    cout << "Enter processing times:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    mergeSort(arr, 0, n - 1);

    cout << "\nSorted Processing Times:\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    // Median
    double median;

    if(n % 2 == 0)
        median = (arr[n/2 - 1] + arr[n/2]) / 2.0;
    else
        median = arr[n/2];

    cout << "Median Processing Time: " << median << endl;

    // Count values greater than median
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > median)
            count++;
    }

    cout << "Orders greater than median: " << count << endl;

    // Difference between fastest and slowest
    int difference = arr[n-1] - arr[0];

    cout << "Difference between fastest and slowest: "
         << difference << endl;

    return 0;
}