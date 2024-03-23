#include <iostream>

using namespace std;

void s(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        int maxNum = arr[i];
        for (int j = i; j < n; ++j) {
            if (arr[j] > maxNum)
                maxNum = arr[j];
            cout << maxNum << " ";
        }
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }

        s(a, n);
    }

    return 0;
}
