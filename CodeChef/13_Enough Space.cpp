#include <iostream>
using namespace std;

int main() {
	int line,N,X,Y;
	cin>>line;
	for (int i=0;i<line;i++){
	    cin>>N>>X>>Y;
	    if ((X+Y*2)<=N){
	        cout<<"YES"<<endl;
	    }else{
	         cout<<"NO"<<endl;
	    }
	}
	return 0;
}
