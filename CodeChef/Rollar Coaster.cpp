#include <iostream>
using namespace std;

int main() {
    int n,ch, hh;
    cin>>n;
    for (int i=0; i<n; i++){
	cin>>ch>>hh;
	if (ch>=hh){
	    cout<<"YES"<<endl;
	}else{
	    cout<<"NO"<<endl;
	}
    }
	return 0;
}
