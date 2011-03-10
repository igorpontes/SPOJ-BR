#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main () {
	int q=0,c=0; 
	double n, cond;
	cin>>n;
	cond = pow(2.0, 31.0);
	if (n<cond && n>-cond) {
		n = abs (n);
		switch ((int) n) {
			case 0:
				cout << "nao";
				return 0;
				break;
			case 1:
				cout << "nao";
				return 0;
				break;
			case 2:
				cout << "sim";
				return 0;
				break;
			case 3:
				cout << "sim";
				return 0;
				break;
				
			default:
				q= sqrt(n);
				for (int i = 2; i<=q; i++) {
					c = (int)n % i;
					if (c==0) {
						cout << "nao";
						return 0;
						break;
					}
				}
				cout << "sim";
				return 0;
				break;
		}
	}
	
	return 0;
}
