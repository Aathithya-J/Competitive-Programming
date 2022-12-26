#include <iostream>
using namespace std;

int main() {
    int line,X,Y,Z;
    cin>>line;
    for (int i=0; i<line;i++){
	    cin>>X>>Y>>Z;
	    if ((X+Y+Z)>=100&&X>=10&&Y>=10&&Z>=10){
	        cout<<"PASS"<<endl;
	    }else{
	        cout<<"FAIL"<<endl;
	    }
	}
}
