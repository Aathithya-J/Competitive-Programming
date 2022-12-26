#include <iostream>
using namespace std;

int main() {
  int line, X, Y;
  cin >> line;
  for (int i = 0; i < line; i++) {
    cin >> X >> Y;
    if (X < Y) {
      cout << "REPAIR" << endl;
    } else if (X > Y) {
      cout << "NEW PHONE" << endl;
    } else {
      cout << "ANY" << endl;
    }
  }
}
