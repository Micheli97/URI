#include <stdio.h>

int main()
{
    
    int tempo;
    int segundo=0, minuto=0, hora=0;
    
    scanf("%d", &tempo);
    while(tempo != 0)
    {
    
        if(tempo > 3600){
            hora = hora + 1;
            tempo = tempo - 3600;
        }
        else if(tempo > 60){
            minuto = minuto + 1;
            tempo = tempo - 60;
        }
        else
        {
            segundo = segundo + tempo;
            tempo = tempo - segundo;
        }
    }    
            
    printf("%d:%d:%d\n", hora, minuto, segundo);
    
    return 0;
}
