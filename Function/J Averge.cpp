#include<bits/stdc++.h>
using namespace std;
double mean(int s){
	double sum;
	for(int i=0;i<s;i++){
		double v;
		cin>>v;
		sum+= v;
	}
	return sum;
}
int main()
{
	int s;
	cin>>s;
	cout<<setprecision(8)<<mean(s)/s<<endl;
}

