#include <fstream>
#include <iostream>
#include <string>
using namespace std;
ifstream data("input.txt");
string mytext;
long int values[] = {};
long int a, n, add, sum, bigt;
int main() {
  while (getline(data, mytext)) {
    if (mytext == "") {
      values[a] = sum;
      a++;
    } else {
      add = stoi(mytext);
      sum += add;
    }
  }
  n = sizeof(values) / sizeof(values[0]);
  for (int i = 0; i < n; i++) {
    cout << values[i] << ' ';
  }
}
