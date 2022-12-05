#include <iostream>
using namespace std;
int main() {
  long int last = 4000000, sum = 0, a = 1, b = 2;
  while (b <= last) {
    if (b % 2 == 0) {
      sum += b;
    }
    auto next = a + b;
    a = b;
    b = next;
  }
  cout << sum << endl;
  return 0;
}
