#include <iostream>
using namespace std;

int main() {
    int line,X;
    cin>>line;
    for (int i=0; i<line;i++){
	    cin>>X;
	    if (X<300){
	        cout<<3000<<endl;
	    }else{
	        cout<<(X*10)<<endl;
	    }
	}
}
