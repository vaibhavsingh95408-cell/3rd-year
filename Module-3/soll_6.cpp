#include <iostream>
using namespace std;


void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}


void heapSort(int arr[], int n)
{
    
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }

    
    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main()
{
    int n;

    cout << "Enter number of emergency cases: ";
    cin >> n;

    int arr[n];
    double sum = 0;

    cout << "Enter response times (in minutes):\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

   
    heapSort(arr, n);

    
    cout << "\nSorted Response Times (Ascending Order):\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

   
    cout << "\n\nFastest Response Time: " << arr[0] << " minutes";
    cout << "\nSlowest Response Time: " << arr[n - 1] << " minutes";

  
    double average = sum / n;
    cout << "\nAverage Response Time: " << average << " minutes";

   
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < average)
            count++;
    }

    cout << "\nNumber of Cases Faster than Average: " << count;

    
    double percentage = (count * 100.0) / n;

    cout << "\nPercentage of Cases Faster than Average: "
         << percentage << "%";

    return 0;
}