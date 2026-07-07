#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    int arr[n];

    cout << "Enter the employee salaries: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "The sorted employee salaries are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}