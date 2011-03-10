#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main() {
	int n,resto,quoc,count=0,temp,par=0,impar=0,resultado;
	string insert;
	cin>>insert;
	while (insert.compare("0") != 0) {
		par=0;
		impar=0;
		for (int i=0; i < insert.length(); i=i+2) {
			impar += (insert[i] - 48);
		}
		for (int i=1; i < insert.length(); i=i+2) {
			par += (insert[i] - 48);
		}
		resultado = (par - impar) % 11;
		if (resultado == 0) {
			cout << insert << " is a multiple of 11." << endl;
		}else {
			cout << insert << " is not a multiple of 11." << endl;
		}
		cin>>insert;
	}
    return 0;
}
