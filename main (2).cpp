#include <stdio.h>
#include <locale.h>

int main(){
    
char carro[50];    
float velocidade;

printf("Digite qual o carro: ");
scanf("%s", carro);

printf("Digite a velocidade: ");
scanf("%f", &velocidade);

printf("A velocidade de %s é: %1.f\n", carro, velocidade);
if(velocidade>=100){
    printf("Rápido");
}else{
    printf("Devagar");
}

return 0;
}


