#include <fstream>
#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;
ifstream data("input.txt");
int a, b, count;
int letters = 14;
string line, c;
set<char> total;
vector<string> finalvals;
int main() {
  a = 0;
  getline(data, line);
  c = line.substr(a, 14);
  cout << c << endl;
  while (c.length() >= 14) {
    for (int i = 0; i < c.length(); i++) {
      total.insert(c[i]);
    }
    if (total.size() == 14) {
      cout << "Finals: " << c << endl;
      cout << "" << letters;
      return 0;
    } else {
      total.clear();
      a += 1;
      letters += 1;
    }
    c = line.substr(a, 14);
    cout << c << endl;
  }
}
