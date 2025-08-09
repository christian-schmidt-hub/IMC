#include <stdio.h>

void calc_IMC(float peso, float altura){   
    float resultado = peso / (altura * altura); //altura ao quadrado
    if (resultado < 18.5) {
        printf("Abaixo do peso\n");
    } else if (resultado >= 18.5 && resultado < 24.9) {
        printf("Peso normal\n");
    } else if (resultado >= 25 && resultado < 29.9) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidade\n");
    }

    printf("Seu IMC : %.2f\n", resultado);
}

int main(){
    float peso, altura, resultado;

    printf("Digite seu peso em kg - Exemplo: 85.5\n");
    scanf("%f", &peso);

    printf("Digite sua altura em metros - Exemplo: 1.80\n");
    scanf("%f", &altura);

    calc_IMC(peso, altura);


    printf("TESTANDO\n");
    printf("TESTANDO\n");

}