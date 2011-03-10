#include <iostream>
#include <queue>

using namespace std;

int main(){
	int n,l,i,minimo,num,armario;
	
	
	while (scanf( "%d%d", &n, &l ) && n!=0) {
		
		queue<int> armarios;
		minimo = num = 1;
		
		scanf("%d", &armario);
		armarios.push(armario);
		
		
		for(i = 1; i < l; i++ ){
			scanf( "%d", &armario );
			
			if (minimo == n) {
				continue;
			}
			while ((num!=0)&& (armario-armarios.front()>=n)) {
				armarios.pop();
				num--;
			}
			armarios.push(armario);
			num++;
			if (num>minimo) {
				minimo = num;
			}
			
		}
		
		printf( "%d\n", n - minimo );
		
	}
	
	return 0;
}
