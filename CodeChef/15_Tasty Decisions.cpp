#include <iostream>
using namespace std;

int main() {
	int line,K,X;
	cin>>line;
	for (int i=0; i<line;i++){
	    cin>>K>>X;
	    K*=2;
	    X*=5;
	    if(K>X){
	        cout<<"Chocolate"<<endl;
	    }else if(K<X){
	        cout<<"Candy"<<endl;
	    }else if(K==X){
	        cout<<"Either"<<endl;
	    }
	}
	return 0;
}
