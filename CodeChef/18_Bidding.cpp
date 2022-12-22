#include <iostream>
using namespace std;

int main() {
    int line,A,B,C;
    cin>>line;
    for (int i=0; i<line; i++){
        cin>>A>>B>>C;
        if (A>B&&A>C){
            cout<<"Alice"<<endl;
        }else if (B>A&&B>C){
            cout<<"Bob"<<endl;
        }else{
            cout<<"Charlie"<<endl;
        }
    }
}
