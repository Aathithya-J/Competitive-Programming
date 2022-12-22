#include <iostream>
using namespace std;

int main() {
    int line,ch;
    cin>>line;
    for (int i=0; i<line; i++){
        cin>>ch;
        if (ch<3){
            cout<<"LIGHT"<<endl;
            
        }else if (ch<7){
            cout<<"MODERATE"<<endl;
            
        }else if (ch>=7){
            cout<<"HEAVY"<<endl;
        }
    }
}
