#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
void x(int x){
for(int i=1;i<=x;i++){
    cout<<i;
    if(i!=x)
        cout<<" ";
}
}
int main(){
int r;
cin>>r;
x(r);

}
