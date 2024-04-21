#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
int sum=0;
string s;
cin>>s;
for(char a:s){
  sum+=(a-'0');
}
cout<<sum;
}
