#include <stdio.h> 
#include <string.h>

#define NMAX 101
#define MAXD 201

//matriz de adjâcencia
short g[NMAX][NMAX];

int dias[NMAX*MAXD];//cada dia esta em que ponto do caminho
int fila[NMAX*MAXD];
int enf[MAXD][MAXD];//marcacao dos enfileirados
int o,d,dia;
int n;

int main(){
    int m,i,j,x,y,v;
    int fim,ini;
    bool pode;
    while(scanf("%d %d",&n,&m)==2&&n){
        //o grafo está zerado
        memset(g,0,sizeof(g));
        //não tem nada enfileirado
        memset(enf,0,sizeof(enf));
        //todas não foram visitadas
        memset(dias,-1, sizeof(dias));

        for(i=0;i<m;++i){
            scanf("%d %d",&x,&y);
            //grafo bidirecional, marca pros 2 lados
            g[x][y]=g[y][x]=1;
        }
        //lê origem, destino e número de dias
        scanf("%d %d %d",&o,&d,&dia);

        pode=false;
        /**CASO ESPECIAL, QNDO NÚMERO DE DIAS É 0(ZERO)**/
        if(dia==0){//em nenhum dia nao sai da cidade
            if(o==d)//se a origem é igual ao destino
                pode=true;//viagem ideal
            //se origem é diferente do destino viagem nao é ideal pois nao ira mudar d cidade
        }
        /**CASO COMUM**/
        else{
            fim=1;//fim da fila
            ini=0;//inicio da fila
            fila[0]=o;//posicao inicial da fila é a cidade de origem
            dias[0]=0;//dia 0
            while(ini<fim && dias[ini]<dia){//enqto o dia atual é menor que o dia IDEAL
                v=fila[ini];//tira da fila
                for(i=1;i<=n;++i){//roda os vertices
                    if(g[v][i] && !enf[i][dias[ini]+1]){//existe a aresta e este vertice ainda nao
                                                        //está na fila do proximo dia
                        fila[fim]=i;//poe na fila
                        dias[fim]=dias[ini]+1;//aumenta um dia
                        enf[i][dias[fim]]=1;//o vertice esta na fila
                        if(dias[fim]==dia && i==d){//se chegou no dia IDEAL e o vertice é o destino
                            ini=fim=0;//esvazia a fila
                            pode=true;//viagem como teobaldo desejava
                            break;
                        }
                        fim++;//aumenta tamanho da fila
                    }
                }
                ini++;//proximo vertice da fila
            }
        }
        if(pode)
            printf("Yes, Teobaldo can travel.\n");
        else
            printf("No, Teobaldo can not travel.\n");
    }
}
