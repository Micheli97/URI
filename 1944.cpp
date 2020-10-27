#include <stdio.h>
#include <stack>
#include <string>
#include <list>
using namespace std;

void reverseStr(string& str) 
{ 
    int n = str.length(); 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
}

int main()
{
    stack <string> pilha;
    string x;
    char valor;
    int r;
    int y;
    string aux;
    int premio=0;
    pilha.push("FACE");
    scanf("%d",&y);
    getchar();
    for (int i=0;i<y;i++){
        x.clear();
       for(int w=0;w<4;w++){
       scanf("%c",&valor);
       getchar();
       x+=valor;
       }
       aux=x;
        reverseStr(aux);  
        if(aux==pilha.top()){
            pilha.pop();
            premio+=1;
            if(pilha.empty()){
             pilha.push("FACE");
            }
        }
        else{
            pilha.push(x);
         }
         
       }
      
        printf("%d\n",premio);
    
        return 0; 
    }
    
   

