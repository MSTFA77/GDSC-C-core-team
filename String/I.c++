#include<bits/stdc++.h>
using namespace std;
int main()
{
	string v;
	cin>>v;
	int size = v.size();
	for(int i=0;i<size/2;i++){
		if(v[i] != v[size - 1 - i]){
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
}
