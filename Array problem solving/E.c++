#include <bits/stdc++.h>
#include <iterator>
using namespace std;
int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min = arr[0], pos = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
            pos = i;
        }
    }

    cout  << min <<" "<<  pos+1 << endl;

    return 0;
}
