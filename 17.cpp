#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Enter number to check: ";
    cin >> key;
    bool found = false;
    for (int i = 0; i < n; i++)
        if (arr[i] == key) found = true;
    if (found) cout << "Number is present.";
    else cout << "Number not present.";
    return 0;
}
