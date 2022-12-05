#include <iostream>
#include <cmath>
using namespace std;
int x,m,i,count;
int prime(int x){
	m=sqrt(x);
	if (x==1 or x==0){
		return false;
	}
	for (i=2; i<=m; i++) {
		if (x%i==0){
			count+=1;
		}
	}
	
	if (count==0){
		return true;
	}
	else{
		return false;
	}
}
int main(){
    cout<<prime(~)<<endl;
}
