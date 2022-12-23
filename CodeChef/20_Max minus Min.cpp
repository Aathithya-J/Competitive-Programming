#include <iostream>
using namespace std;
int main() {
    int line,n1, n2, n3,large,mini;
    cin>>line;
    for (int i=0; i<line;i++){
        cin>>n1>>n2>>n3;
        if(n1 >= n2 && n1 >= n3){
            large=n1;
        }
        else if(n2 >= n1 && n2 >= n3){
            large=n2;
        }
        else{
            large=n3;
            
        }
        if(n1 <= n2 && n1 <= n3){
            mini=n1;
        }
        else if(n2 <= n1 && n2 <= n3){
            mini=n2;
        }
            
        else{
            mini=n3;
            
        }
        cout<<(large-mini)<<endl;
    }
}
