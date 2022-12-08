#include <iostream>
using namespace std;
int a = 0, b = 0, c = 0;
int s = 1000;
int found = 0;
int main() {
  for (a =200; a < s / 3; a++) {
    for (b = a; b < s / 2; b++) {
      c = s - a - b;
      cout<<a<<" "<<b<<" "<<c<<endl;

      if (a * a + b * b == c * c) {
        found = 1;
        cout<<"Found:"<<a<<endl<<b<<endl<<c;
        cout<<"Product:"<<a*b*c;
        break;
      }
    }
    if (found==1) {
      break;
    }
  }
}
