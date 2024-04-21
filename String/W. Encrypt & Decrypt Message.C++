#include<bits/stdc++.h>
using namespace std;
int main(){
	string k =      "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
	string o = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int t;
	cin>>t;
	string s;
	cin>>s;
	int size = s.size();
	int z=0;
	if(t == 1){
		for(int i=0;i<size;i++){
			for(z=0;z<o.size();z++){
				if(s[i] == o[z]){
					break;
				}
			}
			cout<<k[z];
		}
	} else {
		for(int i=0;i<size;i++){
		for(z=0;z<k.size();z++){
				if(s[i] == k[z]){
					break;
				}
			}
			cout<<o[z];
		}
	}


}
