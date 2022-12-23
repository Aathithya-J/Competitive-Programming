#include <iostream>
using namespace std;

int main() {
    int line,X,Y,Z;
    cin>>line;
    for (int i=0; i<line;i++){
	    cin>>X>>Y>>Z;
	    if (X*Y>Z){
	        cout<<"No"<<endl;
	    }else{
	        cout<<"Yes"<<endl;
	    }
	}
}

