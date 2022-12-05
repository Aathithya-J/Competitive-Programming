#include <iostream>
using namespace std;
int primes[10000] = {0}; 
bool isPrime(int n) {
  int j = 0;
  primes[0] = 2;
  while (n > primes[j] and n % primes[j] != 0) {
    j++;
    if (primes[j] == 0) { 
      primes[j] = n; 
      return true; 
    }
  }
  return false; 
}
int main() {
  int num = 1; 
  int i = 3;   
  while (num <= 10001) {
    if (isPrime(i)) {
      num++;
      if (num == 10001) {
        cout << i;
        return 0;
      }
    }
    i += 2; 
  }
  return 0;
}
