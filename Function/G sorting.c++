
#include<bits/stdc++.h>
using namespace std;
void sorting(int arr[],int size){
	sort(arr,arr+size);
	cout<<arr[0]<<" "<<arr[size-1]<<endl;

}
int main(){
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}

	sorting(arr,size);
}
