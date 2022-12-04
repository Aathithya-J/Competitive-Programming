#include <iostream>
using namespace std;
char Comp, Player;
long int add, sum;
int main() {
  cout << "";
  for (int i = 0; i < 2500; i++) {
    cin >> Comp >> Player;
    if (Comp == 'A' && Player == 'X') {
      add = 4;
      sum += add;
    } else if (Comp == 'A' && Player == 'Y') {
      add = 8;
      sum += add;
    } else if (Comp == 'A' && Player == 'Z') {
      add = 3;
      sum += add;
    }

    if (Comp == 'B' && Player == 'X') {
      add = 1;
      sum += add;
    } else if (Comp == 'B' && Player == 'Y') {
      add = 5;
      sum += add;
    } else if (Comp == 'B' && Player == 'Z') {
      add = 9;
      sum += add;
    }

    if (Comp == 'C' && Player == 'X') {
      add = 7;
      sum += add;
    } else if (Comp == 'C' && Player == 'Y') {
      add = 2;
      sum += add;
    } else if (Comp == 'C' && Player == 'Z') {
      add = 6;
      sum += add;
    }
  }
  cout << sum;
}
