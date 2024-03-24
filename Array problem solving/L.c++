#include <iostream>
using namespace std;
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
for(int i=0;i<n;i++){
   int  currentmax=a[i];
    for(int j=i;j<n;j++){
        currentmax=max(currentmax,a[j]);
   cout<<currentmax<<" ";
    }
}
cout<<endl;
}
}
