#include <iostream>
using namespace std;

int main() {
    int line,X,Y;
    cin>>line;
    for (int i=0; i<line;i++){
	    cin>>X>>Y;
	    if (Y*10>X*100){
	        cout<<"Disposable"<<endl;
	    }else{
	        cout<<"Cloth"<<endl;
	    }
    }
}
