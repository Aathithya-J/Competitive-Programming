#include <iostream>
using namespace std;

int main() {
	int line,te;
	cin>>line;
	for (int i=0;i<line;i++){
	    cin>>te;
	    te=te*60/20;
	    cout<<te<<endl;
	}
	return 0;
}
