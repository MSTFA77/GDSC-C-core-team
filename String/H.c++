#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		string w;
        cin>>w;
		int size = w.size();
		int t = 0;
		for(int i=0;i<size-2;i++){
			if((w[i] == '0' && w[i+1] == '1' && w[i+2] == '0') ||
			(w[i] == '1' && w[i+1] == '0' && w[i+2] == '1')){
				t = 1;
				break;
			}
		}
		if(t == 1){
			cout<<"Good"<<endl;
		} else {
			cout<<"Bad"<<endl;
		}
	}

}
