#include <iostream>

using namespace std;
int main () {
	int n, x,y,count=1;
	string a,b;
	cin>> n;
	while (n!=0) {
		cin>>a>>b;
		cout << "Teste "<< count<<"\n";
		for (int i =0; i<n; i++) {
			cin>>x>>y;
			if ((x+y)%2 == 0) {
				cout << a <<"\n";
			}else {
				cout << b <<"\n";
			}
		}
		count++;
		cin>> n;
	}
	return 0;
}
