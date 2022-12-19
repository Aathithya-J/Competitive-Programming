#include <fstream>
#include <iostream>
using namespace std;
string line;
ifstream data("input.txt");
int row, col, count, visible, i, j, x;
int main() {
  int line1[5][5];
  row = 5, col = 5;
  for (int i = 0; i < 5; i++) {
    getline(data, line);
    for (int j = 0; j < 5; j++) {
      line1[i][j] = line[j];
      line1[i][j] = line1[i][j] - 48;
    }
  }
  for (int i = 1; i < row - 1; i++) {
    for (int j = 1; j < col - 1; j++) {
      if (line1[i][j] > line1[0][j]) {
        count += 1;
        cout << "Element at line1[" << i << "][" << j << "]:" << line1[i][j]
             << "a" << endl;
        if (i != 1) {
          for (int x = 1; x <= i - 1; x++) {
            if (line1[i][j] <= line1[x][j]) {
              count -= 1;
              cout << "Removed Element at line1[" << i << "][" << j
                   << "]:" << line1[i][j] << endl;
              break;
            }
          }
        } else {
          break;
        }
      } else if (line1[i][j] > line1[row - 1][j]) {
        count += 1;
        cout << "Element at line1[" << i << "][" << j << "]:" << line1[i][j]
             << "b" << endl;
        for (int x = j; x <= row - 1; x++) {
          if (line1[i][j] <= line1[row - 1][x]) {
            count -= 1;
            cout << "Removed Element at line1[" << i << "][" << j
                 << "]:" << line1[i][j] << endl;
            break;
          }
        }
      } else if (line1[i][j] > line1[i][0]) {
        count += 1;
        cout << "Element at line1[" << i << "][" << j << "]:" << line1[i][j]
             << "c" << endl;
        for (int x = j; x <= 0; x--) {
          if (line1[i][j] <= line1[i][x]) {
            count -= 1;
            cout << "Removed Element at line1[" << i << "][" << j
                 << "]:" << line1[i][j] << endl;
            break;
          }
        }
      } else if (line1[i][j] > line1[i][col - 1]) {
        count += 1;
        cout << "Element at line1[" << i << "][" << j << "]:" << line1[i][j]
             << "d" << endl;
        for (int x = j; x <= col - 1; x++) {
          if (line1[i][j] <= line1[col - 1][x]) {
            count -= 1;
            cout << "Removed Element at line1[" << i << "][" << j
                 << "]:" << line1[i][j] << endl;
            break;
          }
        }
      }
    }
  }
  cout << "Count:" << count + 16 << endl << endl;
}


//This file is not accurate and works 50, 50, Still in progress
//Ans:1832
