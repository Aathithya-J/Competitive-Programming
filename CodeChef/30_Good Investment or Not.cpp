#include <iostream>
using namespace std;

int main() {
    int line,curr1,curr2;
	cin>>line;
	for (int i=0; i<line;i++){
	    cin>>curr1>>curr2;
	    if (curr2*2<=curr1){
	        cout<<"YES"<<endl;
	        
	    }else{
	     cout<<"NO"<<endl;
	    }
	}
}
