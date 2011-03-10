#include <iostream>

using namespace std;
int main () {
	int r,a=0,b=0, x,y,count=1;
	cin>> r;
	while (r!=0) {
		x=0;
		y=0;
		for (int i =0; i<r; i++) {
			cin>> a >> b;
			x += a;
			y += b;
		}
		if (x>y) {
			cout << "Teste "<< count <<"\n" << "Aldo"<<"\n";
		}else {
			cout << "Teste "<< count <<"\n" << "Beto"<<"\n";
		}
		count++;
		cin>> r;
	}
	return 0;
}

