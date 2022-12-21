#include <iostream>
using namespace std;

int main() {
    int ch,nch ,n;
    cin>>n;
    cin>>nch;
    cout<<"Yes"<<endl;
    for (int i=0; i<n-1; i++){
	cin>>ch;
	if ((nch+ch)%2==0){
	    cout<<"Yes"<<endl;
	}else{
	    cout<<"No"<<endl;
	}
    }
	return 0;
}
