#include <iostream>
using namespace std;

int main() {
    int line,X;
    cin>>line;
    for (int i=0; i<line;i++){
	    cin>>X;
	    if (X<=20){
	        cout<<"COLD"<<endl;
	    }else{
	        cout<<"HOT"<<endl;
	    }
	}
}
