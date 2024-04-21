#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(char &c : s){
        if (c == ','){
            c = ' ';
        }
        else if (c>=65&&c<=90){
            c+=32;
        }else{

        c-=32;
        }
    }
    cout << s;
}
