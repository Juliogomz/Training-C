// Crie um programa capaz de armazenar 5 valores de notas em um vetor, e calcular 
// a média devolvendo um valor ao usuário .

#include<stdio.h>
int main(void){
float notas[5];
float media = 0;
float soma = 0;

printf("Insira o valor das 5 notas:\n");
for(int i=0; i<5; i++)
    scanf("%f", &notas[i]);
for(int i=0; i<5; i++)
    soma += notas[i];
    media = soma / 5;
printf("O valor da media eh:\n%.2f", media);
return 0;
}