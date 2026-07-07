#include <iostream>
using namespace std;

// Partition function for descending order
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] > pivot)   // Descending order
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Quick Sort
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int n;

    cout << "Enter number of trade values: ";
    cin >> n;

    int arr[n];

    cout << "Enter trade values:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Calculate overall average
    double total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    double overallAverage = total / n;

    // Quick Sort
    quickSort(arr, 0, n - 1);

    // Display sorted array
    cout << "\nTrade values in Descending Order:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // Top 5 values
    int limit = (n < 5) ? n : 5;

    cout << "\n\nTop " << limit << " Highest Trade Values:\n";

    double topSum = 0;
    for (int i = 0; i < limit; i++)
    {
        cout << arr[i] << " ";
        topSum += arr[i];
    }

    // Average of Top 5
    cout << "\nAverage of Top " << limit << " Values = "
         << topSum / limit << endl;

    // Count values greater than overall average
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > overallAverage)
            count++;
    }

    cout << "Overall Average = " << overallAverage << endl;
    cout << "Number of Trade Values Greater than Overall Average = "
         << count << endl;

    return 0;
}