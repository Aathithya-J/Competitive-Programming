#include <iostream>
using namespace std;

int main() {
    int line,X,Y;
    cin>>line;
    for (int i=0; i<line;i++){
	    cin>>X>>Y;
	    if (Y>X){
	        cout<<7-Y<<endl;
	    }else {
	        cout<<7-X<<endl;
	    }
	}
}
