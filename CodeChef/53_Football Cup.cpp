#include <iostream>
using namespace std;

int main() {
  int line, X, Y;
  cin >> line;
  for (int i = 0; i < line; i++) {
    cin >> X >> Y;
    if (X == Y) {
      if (X > 0 or Y > 0) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    } else {
      cout << "NO" << endl;
    }
  }
}
