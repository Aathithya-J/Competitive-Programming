#include <iostream>
using namespace std;

int main() {
	int line, p1,p2;
	cin>>line;
	for(int i=0;i<line;i++){
	    cin>>p1>>p2;
	    if(p1<p2){
	        cout<<"YES"<<endl;	    
	    }else{
	        cout<<"NO"<<endl;	  
	    }
	    
	}
	return 0;
}
