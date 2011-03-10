#include <stdio.h> 
#include <stdlib.h>
#include <map>
#include <vector>

using namespace std;
struct VENCEU {
    int c;
    int v;
};
//Parte principal do programa
int main(){
	int n,candidato,i;
	struct VENCEU temp;
	temp.c = 0;
	temp.v = 0;
	
	scanf("%d",&n);

	map<int,int> mapa;
	map<int,int>::iterator it;
	mapa.erase ( mapa.begin(), mapa.end());
	for(i=0;i<n;i++){
		scanf("%d",&candidato);
		if (mapa.find(candidato) == mapa.end()) mapa[candidato] = 1;
        else mapa[candidato]++;
	}

	for(it=mapa.begin(); it != mapa.end(); it++){
		if((*it).second > temp.v){
			temp.c = (*it).first;
			temp.v = (*it).second;
		}
	}

	printf("%d",temp.c);
	return 0;
}
