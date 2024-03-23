#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
int n,s=0;
int min_=INT_MAX;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
   cin>>a[i];
   min_=min(min_,a[i]);
}
for(int i=0;i<n;i++){
if(min_==a[i]){
    s++;
}
}
if(s%2==0){
    cout<<"Unlucky\n";
}else{
cout<<"Lucky\n";
}
}

