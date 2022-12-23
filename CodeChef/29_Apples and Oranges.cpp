#include <iostream>
using namespace std;

int main() {
    int cost,curr1,curr2;
	cin>>cost;
	cin>>curr1>>curr2;
	if ((curr1+curr2)>cost){
	    cout<<"No"<<endl;
	}else{
	     cout<<"Yes"<<endl;
	}
	return 0;
}
