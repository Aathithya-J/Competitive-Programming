#include <fstream>
#include <iostream>
#include <string>
using namespace std;
ifstream data("input.txt");
string line, l1, l2, l11, l12, l21, l22;
int n11, n12, n21, n22, cont;
int main() {
  while (getline(data, line)) {
    string letter = ",";
    int pos = 0;
    string token;
    while ((pos = line.find(letter)) != line.length()) {
      token = line.substr(0, pos);
      l1 = token;
      line.erase(0, pos + letter.length());
      l2 = line;
      break;
    }
    string letter2 = "-";
    int pos2 = 0;
    string token2;
    while ((pos2 = l1.find(letter2)) != l1.length()) {
      token2 = l1.substr(0, pos2);
      l11 = token2;
      l1.erase(0, pos2 + letter2.length());
      l12 = l1;
      break;
    }

    string letter3 = "-";
    int pos3 = 0;
    string token3;
    while ((pos3 = l2.find(letter3)) != l2.length()) {
      token3 = l2.substr(0, pos3);
      l21 = token3;
      l2.erase(0, pos3 + letter3.length());
      l22 = l2;
      break;
    }
    n11 = stoi(l11);
    n12 = stoi(l12);
    n21 = stoi(l21);
    n22 = stoi(l22);
    if (n11 <= n21 && n12 >= n22) {
      cont = cont + 1;
    } else if (n11 >= n21 && n12 <= n22) {
      cont = cont + 1;
    }
  }
  cout << cont;
}

