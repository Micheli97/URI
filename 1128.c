#include <stdio.h>
#include <string.h>

#define MAXV 2010
#define ADJACENTE 1
#define NAO_ADJACENTE 0

#define BRANCO 0
#define CINZA 1
#define PRETO 2
#define NULO -1

int grafo[MAXV + 1][MAXV +1]; //matriz de adjacências
int N; //quantidade de vértices
int c[MAXV+1]; //cor
int d[MAXV+1]; //tempo de descoberta
int t[MAXV+1]; //tempo de término
int a[MAXV+1]; //antecessor na árvore de busca
int tempo; //tempo corrente durante execução do algoritmo

void DFS_VISIT(int u)
{
	c[u] = CINZA;
	tempo++;
	d[u] = tempo;

	int v;
	for(v = 1; v <= N; v++)
	{
		if(grafo[u][v] == ADJACENTE)
		{ //se v é adjacente a u
			if(c[v]==BRANCO)
			{
				a[v] = u;
				DFS_VISIT(v);
			}
		}
	}

	c[u] = PRETO;
	tempo++;
	t[u] = tempo;
}

int DFS(int origem)
{
    int u;
	for(u = 1; u <= N; u++)
	{
		c[u] = BRANCO;
		d[u] = NULO;
		t[u] = NULO;
		a[u] = NULO;
	}

	tempo=0;

	DFS_VISIT(origem);
}


void inicializar()
{
	memset(grafo,NAO_ADJACENTE,sizeof(grafo));
}


int main()
{
    
    
    int n, m;
    int v, w, p;
    int i, j;
    
	

	while(scanf("%d %d", &n, &m)!= EOF && n != 0 && m != 0){
	    inicializar();
	    int teste = 1;
	    N = n;
	    for(i = 0; i < m; i++)
	    {
	        scanf("%d %d %d", &v, &w, &p);    
	        
	        if(p == 1)
	        {
	            grafo[v][w] = 1;
	        }
	        else if(p == 2)
	        {
	            grafo[v][w] = 1;
	            grafo[w][v] = 1;
	        }
	        
	    }
	    
	    for(i = 1; i <= n; i++)
	    {
            DFS(i);	           
	        
	        for(j = 1; j <= n; j++)
	        {
                if(c[j] == BRANCO)
                {
                    teste = 0;   
                }               	        
	        }
	    }
	    
	    printf("%d\n", teste);
	        
	}
    
	return 0;
}
