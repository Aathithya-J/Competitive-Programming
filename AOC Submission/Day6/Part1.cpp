#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
ifstream data("input.txt");
int a, w, x, y, z, letters, count;
string line, s;
int cont;
int main() {
  letters=4;
  w = 0;
  x = 1;
  y = 2;
  z = 3;
  while (getline(data, line)) {
    a = line.length();
    for (int i = 0; i < a; i++) {
      if (line[w] != line[x] && line[w] != line[y] && line[w] != line[z] &&
          line[x] != line[y] && line[x] != line[z] && line[y] != line[z]) {
        cout << letters;
        return 0;
      } else {
        letters += 1;
        w += 1;
        x += 1;
        y += 1;
        z += 1;
      }
    }
  }
  cout << letters;
}
