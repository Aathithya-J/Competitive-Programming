#include <iostream>
using namespace std;

int main() {
    int line,val;
	cin>>line;
	for (int i=0; i<line; i++){
	    cin>>val;
	    if (val>30){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
