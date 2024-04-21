#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		int s = s1.size() + s2.size();
		int l1 = 1,l2 = 1;
		for(int i=0;i<s;i++){
        if(s1.size() != i && l1==1){
				cout<<s1[i];
			} else {
				l1 = 0;
			}
			if(s2.size() != i && l2==1){
            cout<<s2[i];
			} else {
				l2 = 0;
			}
		}
		cout<<endl;
	}
}
