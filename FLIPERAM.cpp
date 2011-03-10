#include <iostream>
using namespace std;
int main () {
	int n,m,t;
	cin>> n >> m;
	if (n>=m && n>=1 && n<=10000 && m>=1 && m<=500) {
		int numeros[n];	
		for (int y=0; y<n; y++) {
			cin >> t;
			numeros[y] = t;
		}
		// Algoritmo Bolha para ordenar em ordem crescente
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i; j < n; j++)
			{
				// Se você inverter o sinal para <
				// A ordenação será de maneira decrescente
				if (numeros[i] < numeros[j])
				{
					int aux = numeros[i];
					numeros[i] = numeros[j];
					numeros[j] = aux;
				}
			}
		}
		for (int x = 0; x<m; x++) {
			if (x == m-1) {
				cout << numeros[x];
			}else {
				cout << numeros[x] << "\n";
			}
		}		
	}
	
	return 0;
}
