#include <iostream>
using namespace std;
int arr[] = {4, 5, 1, -3, 6}, k = 9, val;
int main() {
  for (int i = 0; i < sizeof(arr); i++) {
    val = k - arr[i];
    for (int j = 0; j < sizeof(arr); j++) {
      if (arr[j] == val) {
        cout << "True";
        cout << "  "<< arr[j] << " , " << arr[i];
        return 0;
      }
    }
  }
}
//works with any value, just change line 3
