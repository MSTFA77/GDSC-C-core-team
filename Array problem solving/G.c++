#include <bits/stdc++.h>
#include <iterator>
using namespace std;
int main() {
    long long n ;
    bool x=0;
    cin >> n;
    long long arr[n];

    for(int i = 0 ; i <n; i++) {
        cin >> arr[i];
    }
    for(int  i = 0 ; i <=n/2; i++) {
  if(arr[i]!=arr[n-1-i]){
        x=1;
        break;
    }
    }
    if (x==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    return 0;
    }
}
