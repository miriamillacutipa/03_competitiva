#include <iostream>
using namespace std;

int main() {
	long n, x, s;
	long r=0;
	cin >> n; 

	for(int i=0; i<n-1; i++) {
		cin >> x ;
		r= r +x;
}
s= (n*(n+1))/2;
cout << s-r << " ";
return 0;
}


