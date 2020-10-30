#include <iostream>
#include <string>

using namespace std;

int main () {

    int n, tam;
    string frase;

    cin >> n;
    getchar();
    
    while(n--)
    {
        getline (cin, frase);

        tam = frase.length();

        for (int i = tam/2 - 1; i >= 0; i--) printf("%c", frase[i]);

        for (int i = tam-1; i >= tam/2; i--) printf("%c", frase[i]);

        printf("\n");
    }

    return 0;
}
