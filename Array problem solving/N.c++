#include <iostream>
#include <climits>
using namespace std;
int main() {
int n1,n2,s=0;
string c;
cin>>n1>>n2>>c;
if(n1+n2+1!=c.size()){
    cout<<"No"<<endl;
    return 0;
}
if(c[n1]!='-'){
    cout<<"No"<<endl;
    return 0;
}
for(int i=0;i<c.size();i++){
    if(c[i]>=48&&c[i]<=57&&i!=n1){
			s++;
		}
}
if(s!=n1+n2){
    cout<<"No"<<endl;
}else{
cout<<"Yes"<<endl;
}
}
