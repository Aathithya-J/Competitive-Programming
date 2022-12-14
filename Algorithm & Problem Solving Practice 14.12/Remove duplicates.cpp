#include <iostream>
#include <set>
using namespace std;
int main()
{
    int A[] = {4, 2, 5, 3, 3, 1, 2, 4, 1, 5, 5, 5, 3, 1};
    set<int> s(begin(A), end(A));
    for (int i: s) {
        cout << i << " ";
    }
    return 0;
}
//Just make it a set lol
//It will sort it too!
