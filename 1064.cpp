#include<iostream>
using namespace std;

int main() {
	int a, b, c, d, e;

	cin >> a >> b >> c;

	d = a < b ? a : b;
	e = c < d ? c : d;
	cout << e << endl;
	
	return 0;
}
