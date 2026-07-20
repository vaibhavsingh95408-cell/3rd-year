#include <iostream>
using namespace std;

int main() {
    int A, B;
    cout<< "Enter two numbers: ";
    cin >> A >> B;

    long long result = 1;

    for (int i = 1; i <= B; i++) {
        result *= A;
    }

    cout << result;

    return 0;
}