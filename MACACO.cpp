#include <iostream>

using namespace std;

typedef struct{
	int x1, y1, x2, y2;
} Retangulo;

int main() {
	int n, contador = 1;
	bool vazio = false;
	Retangulo inicio, atual;
	while(scanf( "%d", &n) && n!=0) {
		vazio = false;
		for (int i = 0; i<n; i++) {
			scanf( "%d%d%d%d", &atual.x1, &atual.y1, &atual.x2, &atual.y2);
			
			if (i==0) {
				inicio = atual;
			}else {
				if (atual.x2 < inicio.x1 || atual.y2 > inicio.y1 ||
					atual.x1 > inicio.x2 || atual.y1 < inicio.y2) {
					vazio = true;
				}else {
					if( inicio.x1 < atual.x1 && atual.x1 < inicio.x2 ) 
						inicio.x1 = atual.x1;
					if( atual.x2 > inicio.x1 && atual.x2 < inicio.x2 ) 
						inicio.x2 = atual.x2;
					if( atual.y1 < inicio.y1 && atual.y1 > inicio.y2 ) 
						inicio.y1 = atual.y1;
					if( atual.y2 < inicio.y1 && atual.y2 > inicio.y2 ) 
						inicio.y2 = atual.y2;
				}

			}

		}
		
		cout << "Teste " << contador++ << "\n";		
		if (vazio) {
			puts("nenhum\n");
		}else {
			printf("%d %d %d %d\n\n", inicio.x1,inicio.y1,inicio.x2,inicio.y2);
		}
	}
	
	return 0;
}
