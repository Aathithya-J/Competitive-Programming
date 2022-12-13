#include <bits/stdc++.h>
#include <cmath>
using namespace std;
long long i, prime, x, sum;
int main() {
  sum = 0;
  for (i = 2; i < 2000000; i++) {
    prime = 0;
    for (x = 2; x <= sqrt(i); ++x) {
      if (i % x == 0) {
        prime = 1;
        break;
      }
    }
    if (prime == 0) {
      cout << i << endl;
      sum += i;
    }
  }
  cout << sum;
}

//Pls dont be like me who wasted 3 days using different codes only to realise that my data type needed "long"
