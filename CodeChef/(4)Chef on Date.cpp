#include <iostream>
using namespace std;

int main() {
    int cb, bb,n;
    cin>>n;
    for (int i=0; i<n; i++){
	cin>>cb>>bb;
	if (cb>=bb){
	    cout<<"YES"<<endl;
	}else{
	    cout<<"NO"<<endl;
	}
    }
	return 0;
}
