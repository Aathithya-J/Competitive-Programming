#include <iostream>
using namespace std;

int main() {
  int line, a, b;
  cin >> line;
  for (int i = 0; i < line; i++) {
    cin >> a >> b;
    cout << a % b << endl;
  }
}
