#include <iostream>
using namespace std;
int main() {
	int n, s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s < 4) {
			cout << "MILD" << endl;
		}
		else if(s < 7) {
			cout << "MEDIUM" << endl;
		}
		else{
		    cout << "HOT" << endl;
		}
	}
}
