#include <iostream>
using namespace std;

int main() {
    int line,cc,rc;
	cin>>line;
	for (int i=0; i<line; i++){
	    cin>>rc>>cc;
	    if (rc<cc){
	        cout<<0<<endl;
	    }else{
	        cout<<(rc-cc)<<endl;
	    }
	}
	return 0;
}
