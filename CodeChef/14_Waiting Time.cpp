#include <iostream>
using namespace std;

int main() {
	int line,K,X;
	cin>>line;
	for (int i=0; i<line;i++){
	    cin>>K>>X;
	    K*=7;
	    cout<<(K-X)<<endl;
	}
	return 0;
}
