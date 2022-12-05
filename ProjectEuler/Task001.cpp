#include <iostream>
using namespace std;
long int sum;
int main() {
  for (int i = 0; i < 1000; i++) {
    if (i % 3 == 0) {
      sum += i;
    } else if (i % 5 == 0) {
      sum += i;
    } else if (i % 5 == 0 and i % 3 == 0) {
      sum += i;
    }
  }
  cout << sum;
}
