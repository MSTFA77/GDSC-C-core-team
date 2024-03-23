#include <bits/stdc++.h>
#include <iterator>
using namespace std;
int main() {
    int n ;
    bool x=0;
    cin >> n;

    int arr[n];
    for(int i = n ; i >0; i--) {
        cin >> arr[i];
    }
    for(int i = 1 ; i <=n; i++) {

        cout<<arr[i]<<" ";

    }

    return 0;
}
