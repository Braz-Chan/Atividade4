#include <stdio.h>

int main() {
    int A, B, C;

    printf("Digite três valores (A, B e C): ");
    scanf("%d %d %d", &A, &B, &C);

    int menor, meio, maior;

    if (A <= B && A <= C) {
        menor = A;
        if (B <= C) {
            meio = B;
            maior = C;
        } else {
            meio = C;
            maior = B;
        }
    } else if (B <= A && B <= C) {
        menor = B;
        if (A <= C) {
            meio = A;
            maior = C;
        } else {
            meio = C;
            maior = A;
        }
    } else {
        menor = C;
        if (A <= B) {
            meio = A;
            maior = B;
        } else {
            meio = B;
            maior = A;
        }
    }

    printf("Valores em ordem ascendente: %d, %d, %d\n", menor, meio, maior);

    return 0;
}
