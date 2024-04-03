#include <stdio.h>
#include <locale.h>
int main (){
    
char nome[50];    
float idade;

printf("Digite o nome da pessoa: ");
scanf("%s", nome);

printf("Digite a idade da pessoa: ");
scanf("%f", &idade);

printf("A idade de %s é: %1.f\n", nome, idade);
if(idade>=18){
    printf("Adulto");
}else{
    printf("Criança");
}

return 0;

}


