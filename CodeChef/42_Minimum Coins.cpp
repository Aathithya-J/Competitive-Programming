#include <iostream>
using namespace std;

int main() {
	int line,a;
	cin>>line;
	for(int i=0; i<line; i++)
	{
	    cin>>a;
	    if(a<10)
	    {
	        cout<<a;
	    }
	    else
	    {
	        cout<<a%10;
	    }
	    cout<<endl;
	}
}
