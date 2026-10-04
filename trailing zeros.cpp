#include <iostream>
using namespace std;

int main() {
	int n, s=0; 
	cin >> n; 
	
	while (n>0) {
		n = n/5;
		s = s+n;
	}
	cout << s;
	return 0;
}
