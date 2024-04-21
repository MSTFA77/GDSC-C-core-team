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
    string smallest_lexico = min(s[0], s[1]);
    cout<< smallest_lexico << endl;
    return 0;
}


