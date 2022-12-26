#include <iostream>
using namespace std;

int main() {
    int line,X,Y;
    cin>>line;
    for (int i=0; i<line;i++){
	    cin>>X>>Y;
	    if (Y*30<=X){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
    }
}
