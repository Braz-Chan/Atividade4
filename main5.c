#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero == 5 || numero == 200 || numero == 400) {
        printf("O número está nos valores específicos.\n");
    } else if (numero >= 500 && numero <= 1000) {
        printf("O número está no intervalo entre 500 e 1000.\n");
    } else {
        printf("O número está fora dos escopos anteriores.\n");
    }

    return 0;
}
