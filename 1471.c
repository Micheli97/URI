#include <stdio.h>

int main () {

    int n, r, i, id, vetor[10001];
    
    while (scanf("%i %i", &n, &r) != EOF) {
        
        for (i = 1; i <= n; i++)
        {
            vetor[i] = 0;
        }
        
        for (i = 0; i < r; i ++)
        {
            scanf("%i", &id);
            vetor[id] = 1;
        }
        
        if (n == r) printf("*\n");
        
        else
        {
            for (i = 1; i <= n; i ++) {
                
                if (vetor [i] == 0) {
                    printf ("%i ", i);
                }
            }
            printf("\n");
        }
    }
    
    return 0;
}

