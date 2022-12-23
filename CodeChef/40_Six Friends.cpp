#include <iostream>
using namespace std;

int main() {
    int line,X,Y,tworoom,threeroom;
    cin>>line;
    for (int i=0; i<line;i++){
	    cin>>X>>Y;
	    tworoom=3*X;
	    threeroom=2*Y;
	    if(threeroom<tworoom){
	        cout<<threeroom<<endl;
	    }else{
	        cout<<tworoom<<endl;
	    }
	}
}
