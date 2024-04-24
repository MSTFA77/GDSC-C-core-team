#include<bits/stdc++.h>
using namespace std;
int countNumber(int arr[],int s){
	int c = 1;
	for(int i=1;i<s;i++){
		if(arr[i] != arr[i-1]){
			c++;
		}
	}
	return c;
}
int main()
{
	int s;
	cin>>s;
	if(s == 0){
		cout<<0;
		return 0;
	}
	int arr[s];
	for(int i=0;i<s;i++){
		cin>>arr[i];
	}
	sort(arr,arr+s);

	cout<<countNumber(arr,s)<<endl;
}
