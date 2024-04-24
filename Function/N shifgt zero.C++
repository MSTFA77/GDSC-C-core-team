#include<bits/stdc++.h>
using namespace std;
int c=0;
int shzero(int s){
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
int zeros(){
for(int i=0;i<c;i++){
		cout<<0<<" ";
	}

}
int main()
{
	int s;
	cin>>s;
shzero(s);
zeros();
	
}
