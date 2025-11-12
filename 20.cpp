#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements (sorted array): ";
    cin >> n;
    int arr[n];
    cout << "Enter sorted elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    // In a sorted array, the largest element is at the end.
    cout << "Largest element = " << arr[n - 1];
    return 0;
}
