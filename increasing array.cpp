#include <iostream> 
using namespace std;

int main () {
	int n;
	long s=0;
	cin >> n;
	
	int A[n];
	for (int i=0; i<n; i++) {
		cin >> A[i];
	} 
	
	for(int i=0; i<n-1; i++) {
		if(A[i] > A[i+1]) {
			s = s+(A[i] - A[i+1]);
			A[i+1] = A[i];
		}	 
	}
	cout << s;
	return 0;
}

