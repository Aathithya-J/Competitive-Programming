#include <iostream>
using namespace std;

int main() {
    int line,X,Y,Z;
    cin>>line;
    for (int i=0; i<line;i++){
	    cin>>X>>Y>>Z;
	    cout<<(X*5+Y*10)/Z<<endl;
	}
}
