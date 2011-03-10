#include <iostream>
using namespace std;
int main () {
	int n, c=1,x;
	cin>>n;
	while (n>0 && n<=10000) {
		int t[n];
		for (int i=0; i<n; i++) {
			cin>>t[i];
			if (t[i]<0 || t[i]>10000) {
				return 0;
			}
		}
		for (int i=0; i<n; i++) {
			x=i+1;
			if (t[i] == x) {
				cout << "Teste " << c << "\n" << x << "\n";
				c++;
				break;
			}
			
		}
		cin>>n;
	}
	return 0;
}
