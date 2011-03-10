#include <iostream>

using namespace std;
int main () {
	int r,a=0,b=0, x,y,count=1;
	cin>> r;
	while (r!=0) {
		x=0;
		y=0;
		cout << "Teste "<< count <<"\n";
		for (int i =0; i<r; i++) {
			cin>> a >> b;
			x += a;
			y += b;
			cout << x-y <<"\n";
		}
		count++;
		cout << "\n";
		cin>> r;
	}
	return 0;
}
