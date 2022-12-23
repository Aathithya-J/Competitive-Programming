#include <iostream>
using namespace std;

int main() {
    int line,N,M,X;
    cin>>line;
    for (int i=0; i<line;i++){
	    cin>>N>>M>>X;
	    cout<<(N*2+M*2)*X<<endl;
	}
}
