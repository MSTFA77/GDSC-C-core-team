#include <iostream>
using namespace std;
int index = 0;
int num;
int bi[100];
void *bin(){
	while(num != 0){
		bi[index] = num%2;
		num /= 2;
		index++;
	}
}
int pali(){

	for(int i=0,z=index-1;i<index,z>=0;i++,z--){
		if(bi[i] != bi[z]){
			cout<<"NO"<<endl;
			return 0;
		}
	}

	cout<<"YES"<<endl;

}

int main() {
	cin>>num;
 if(num%2==0){
        cout<<"NO"<<endl;
        return 0;
    }
    bin();
    pali();



}
