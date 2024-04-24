#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
void prime(int&x,int&y){
int z;
z=x;
x=y;
y=z;
cout<<x<<" "<<y;
}
int main(){
    int z,l;
cin>>z>>l;
prime(z,l);
}
