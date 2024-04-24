#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
long long eq(int x,int n){
long long z=0;
for(int i=2;i<=n;i+=2){
    z+=(pow(x,i));

}
return z;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<eq(x,y)<<endl;
}
