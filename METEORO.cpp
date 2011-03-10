#include <iostream>

using namespace std;

int caiu(int x, int y, int x1, int x2, int y1, int y2){
	if(x>=x1 && x<=x2 && y<=y1 && y>=y2)
		return 1;
	
	return 0;
}

int main() {
	int x1,x2,y1,y2,x,y,i,soma,numMeteoros; 
	int contador = 1;
	while(scanf( "%d%d%d%d", &x1, &y1,&x2, &y2)) {
		if( !x1 && !y1 && !x2 && !y2 ) return 0;
		soma = 0;
		scanf( "%d", &numMeteoros);
		
		for(i = 0; i < numMeteoros; i++) {
			scanf( "%d%d", &x, &y );
			soma += caiu(x,y,x1,x2,y1,y2);
		}
		cout << "Teste " << contador++ << "\n" << soma << "\n\n";
	}
	
	return 0;
}
