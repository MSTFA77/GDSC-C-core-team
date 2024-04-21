#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
int sum=0;
string s;
cin>>s;
if(s.size()<=10){
    cout<<s<<endl;
}else{
for(int i=1;i<s.size()-1;i++){
    sum++;
}
cout<<s[0]<<sum<<s[s.size()-1]<<endl;
}
}
}
