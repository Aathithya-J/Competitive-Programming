#include <iostream>
using namespace std;

int main() {
	int line, N;
	cin>>line;
	for(int i=0;i<line;i++){
	    cin>>N;
	    if (N>=1&&N<=4){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
