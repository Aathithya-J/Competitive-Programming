#include <iostream>
using namespace std;

int main() {
    int line,X,NX,Y;
    cin>>line;
    for (int i=0; i<line;i++){
	    cin>>X>>Y;
	    NX=X+200;
	    if (Y<=NX&&Y>=X){
	        cout<<"YES"<<endl;
	    }else{
	         cout<<"NO"<<endl;
	    }
	    
	}
}
