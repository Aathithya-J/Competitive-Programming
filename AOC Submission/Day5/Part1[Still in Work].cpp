#include <fstream>
#include <iostream>
#include <string>
using namespace std;
char arr1[2] = {'Z', 'N'};
char arr2[3] = {'D', 'C', 'M'};
char arr3[1] = {'P'};
char fin[] = {};
char fin1[] = {};
char newa[] = {};
string line, l1, l2, l4;
int p1, p2, p3;
int main() {
  ifstream data("input.txt");
  while (getline(data, line)) {
    string letter = "move";
    int pos = 0;
    string token;
    while ((pos = line.find(letter)) != line.length()) {
      token = line.substr(0, pos);
      l1 = token;
      line.erase(0, pos + letter.length());
      l2 = line;
      break;
    }
    string letter2 = "from";
    int pos2 = 0;
    string token2;
    while ((pos2 = line.find(letter2)) != line.length()) {
      token2 = line.substr(0, pos2);
      p1 = stoi(token2);
      line.erase(0, pos2 + letter2.length());
      l4 = line;
      break;
    }
    string letter3 = "to";
    int pos3 = 0;
    string token3;
    while ((pos3 = line.find(letter3)) != line.length()) {
      token3 = line.substr(0, pos3);
      p2 = stoi(token3);
      line.erase(0, pos3 + letter3.length());
      p3 = stoi(line);
      break;
    }
    if (p2 == 1) {
      for (int i = 0; i < 3; i++) {
        fin[i] = arr1[i];
      }
    } else if (p2 == 2) {
      for (int i = 0; i < 2; i++) {
        fin[i] = arr2[i];
      }
    } else {
      for (int i = 0; i < 1; i++) {
        fin[i] = arr3[i];
      }
    }
    if (p3 == 1) {
      for (int i = 0; i < 3; i++) {
        fin1[i] = arr1[i];
      }
    } else if (p3 == 2) {
      for (int i = 0; i < 2; i++) {
        fin1[i] = arr2[i];
      }
    } else {
      for (int i = 0; i < 1; i++) {
        fin1[i] = arr3[i];
        arr3.erase(fin1[i]);
      }
    }
    for (int i = (p1 + 1); i >= 0; i--) {
      cout << fin[i] << " ";
    }
    int m = sizeof(fin) / sizeof(*fin);
    int n = sizeof(fin1) / sizeof(*fin1);

    int result[m + n];
    copy(fin, fin + m, result);
    copy(fin1, fin1 + n, result + m);

    for (int &i : result) {
      
    }

    return 0;
  }
}
