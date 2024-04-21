#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string s[2];
    int x = 2;
    for (int i = 0; i < x; ++i) {
        getline(cin, s[i]);
    }
cout<<s[0].size()<<" "<<s[1].size()<<endl;
cout<<s[0]+s[1]<<endl;
string a=s[0],b=s[1];
swap(a[0],b[0]);
cout<<a<<" "<<b<<endl;
}


