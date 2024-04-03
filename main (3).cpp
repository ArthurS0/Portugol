#include <stdio.h>
#include <locale.h>

int main(){
    
char nome[50];
float ganhos, gastos, saldo;

printf("Digite o nome da pessoa: ");
scanf("%s", nome);

printf("Digite os ganhos da pessoa: ");
scanf("%f", &ganhos);

printf("Digite os gastos da pessoa: ");
scanf("%f", &gastos);

saldo = ganhos-gastos;

printf("O valor do saldo da pessoa é: %1.f-%1.f = %1.f\n", ganhos, gastos, saldo);
if(saldo>=200){
    printf("Tenho saldo");
}else{
    printf("Pouco saldo");
}

return 0;

}


