#include <iostream>
#include <algorithm>
using namespace std;
void shiftRight(int arr[], int size, int x) {
    x = x % size;
    reverse(arr, arr + size);
    reverse(arr, arr + x);
    reverse(arr + x, arr + size);
}
int main() {
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    shiftRight(arr, n, x);
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
