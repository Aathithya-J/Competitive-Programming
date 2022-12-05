#include <iostream>
#include <cmath>
using namespace std;
int x,m,i,count;
int main(){
	cout<<"";
	cin>>x;
	m=sqrt(x);
	if (x==1 or x==0){
		cout<<false;
	}
	for (i=2; i<=m; i++) {
		if (x%i==0){
			count+=1;
		}
	}
	
	if (count==0){
		cout<<true;
	}
	else{
		cout<<"false;
	}

}
