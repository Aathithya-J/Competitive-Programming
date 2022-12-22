#include <iostream>
using namespace std;

int main() {
    int line,r,a,nr;
	cin>>line;
	for (int i=0; i<line; i++){
	    cin>>r>>a>>nr;
	    cout<<(4*r+2*a)<<endl;
	}
	return 0;
}
