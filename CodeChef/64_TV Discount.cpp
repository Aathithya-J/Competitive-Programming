#include <iostream>
using namespace std;

int main() {
    int line,W,X,Y,Z;
    cin>>line;
    for (int i=0; i<line;i++){
	    cin>>W>>X>>Y>>Z;
	    if (W-Y<X-Z){
	        cout<<"First"<<endl;
	    }else if (W-Y>X-Z){
	        cout<<"Second"<<endl;
	    }else{
	        cout<<"Any"<<endl;
	    }
    }
}
