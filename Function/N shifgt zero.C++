#include<bits/stdc++.h>
using namespace std;
int shzero(int s){
	int c = 0;
	for(int i=0;i<s;i++){
		int v;
		cin>>v;
		if(v == 0){
			c++;
		} else {
			cout<<v<<" ";
		}
	}
	return c;
}
int main()
{
	int s;
	cin>>s;
	int zeros = shzero(s);
	for(int i=0;i<zeros;i++){
		cout<<0<<" ";
	}
}
