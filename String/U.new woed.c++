#include<bits/stdc++.h>
using namespace std;
int main(){
	string s; 
	cin>>s;   
    int size = s.size();
	int e=0,g=0,y=0,p=0,t=0;
	for(int i=0;i<size;i++){
		if(s[i] == 'e' || s[i] == 'E'){
			e++;
		} else if(s[i] == 'g' || s[i] == 'G'){
			g++;
		}else if(s[i] == 'y' || s[i] == 'Y'){
			y++;
		}else if(s[i] == 'p' || s[i] == 'P'){
			p++;
		}else if(s[i] == 't' || s[i] == 'T'){
			t++;
		}
	}
	int m1 = min(e,g);  
	int m2 = min(y,p);   
	int m3 = min(m1,m2);
	cout<<min(m3,t);
	
}