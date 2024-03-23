#include <iostream>
#include <climits>
using namespace std;
int main() {
int n,min_=INT_MAX,max_=INT_MIN,minI,maxI;
cin>>n;
int a[n];
for(int i=0;i<n;++i){
        cin>>a[i];
        if(a[i]<min_){
                min_=a[i];
            minI=i;
        }
        if(a[i]>max_){
                max_=a[i];
            maxI=i;
        }
}
swap(a[maxI],a[minI]);
for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
}

}
