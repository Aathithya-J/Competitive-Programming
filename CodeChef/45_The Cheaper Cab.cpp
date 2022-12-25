#include <iostream>
using namespace std;

int main() {
    int line,X,Y;
    cin>>line;
    for (int i=0; i<line;i++){
	    cin>>X>>Y;
	    if (X<Y){
	        cout<<"FIRST"<<endl;
	    }else if (X>Y){
	        cout<<"SECOND"<<endl;
	    }else{
	        cout<<"ANY"<<endl;
	    }
	}
}
