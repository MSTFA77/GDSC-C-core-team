#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int s;
	cin>>s;
	int arr1[s];
	int arr2[s];
	for(int i=0;i<s;i++){
		cin>>arr1[i];
	}
	for(int i=0;i<s;i++){
		cin>>arr2[i];
	}
	print(arr2,s);
	print(arr1,s);
}
