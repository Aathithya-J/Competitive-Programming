#include <bits/stdc++.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int a, b, i,j, sum;
string line;
int main() {
  ifstream data("input.txt");
  while (getline(data, line)) {
    int mid = (line.length() + 1) / 2;
    string first = line.substr(0, mid);
    string second = line.substr(mid, line.length());
    int val1[first.length()];
    int val2[second.length()];
    int i;
    for (i = 0; i < mid; i++) {
      val1[i] = first[i];
      val2[i] = second[i];
    }
    for (i = 0; i < mid; i++) {
      for (j = 0; j < mid; j++) {
        if (val2[i] == val1[j]) {
          a = val2[i];
          break;
        }
      }
    }
    if (a < 96) {
      b = a - 38;
    } else {
      b = a - 96;
    }
    sum += b;
  }
  cout<<sum;
}
