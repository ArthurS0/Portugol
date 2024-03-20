#include <stdio.h>
#include <locale.h>

int main(){
    set locale(LC_ALL"");
    float velocidade, distancia, tempo;
    
    printf("Digite a velocidade do carro");
    scanf("%f", &velocidade);
    
    printf("Digite a distância a ser percorrida em KM: ");
    scanf("%f", &distancia);
    
    tempo = distancia/velocidade;
    
    printf("O tempo necessário para percorrer %.2f km: %.2f horas \n", distancia, tempo);
    
    return 0;
 
}