#include <stdio.h>
int main (){
    
float nota1, nota2, media;

printf("Digite a nota 1: ");
scanf("%f", &nota1);

printf("Digite a nota 2: ");
scanf("%f", &nota2);

media = nota1+nota2/2;

printf("A media é: %.1f", media);
if(media>=5){
    printf(" = Aprovado");
}else{
    printf(" = Reprovado");
}

return 0;

}
