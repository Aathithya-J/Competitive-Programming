#include <iostream>
using namespace std;

int main() {
    int line,bought,sold;
	cin>>line;
	for (int i=0; i<line;i++){
	    cin>>bought>>sold;
	    if (bought>sold){
	        cout<<"LOSS"<<endl;
	    }else if (bought==sold){
	        cout<<"NEUTRAL"<<endl;
	    }else if (bought<sold){
	        cout<<"PROFIT"<<endl;
	    }
	}
	return 0;
}
