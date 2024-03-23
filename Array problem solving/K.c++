#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
int n,sum=0;
cin>>n;
string s;
cin>>s;
for(char a:s){
  sum+=(a-'0');
}
cout<<sum;
}
