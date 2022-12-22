#include <iostream>
using namespace std;

int main() {
    int ch,ch2 ,n;
    cin>>n;
    for (int i=0; i<n; i++){
	cin>>ch>>ch2;
	if ((ch2+ch)%2==0){
	    cout<<"YES"<<endl;
	}else{
	    cout<<"NO"<<endl;
	}
    }
}
