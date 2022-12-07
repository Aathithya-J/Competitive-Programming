#include <fstream>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<string> allstr = {};
  ifstream data("input.txt");
  string content;
  string sb1,sb2,sb3;
  int a,u,sum,k,c = 0, d = c+1, e = c+2;
  while (getline(data, content)) {
    allstr.push_back(content);
  }
  while (k < allstr.size()) {
    sb1 = allstr[c];
    sb2 = allstr[d];
    sb3 = allstr[e];
    for (int c = 0; e < sb1.size(); ++c) {
      for (int d = 0; d < sb2.size(); ++d) {
        for (int e = 0; e < sb3.size(); ++e) {
          if (sb1[c] == sb2[d] && sb1[c] == sb3[e]) {
            a=sb1[c];
          }
        }
      }
    }
    if (a < 96) {
      u = a - 38;
    } else {
      u = a - 96;
    }
    sum += u;
    c += 3;
    d += 3;
    e += 3;
  }
  cout << sum ;
}
