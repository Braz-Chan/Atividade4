#include <stdio.h>

int main() {
    int A, B, C;

    printf("Digite três valores (A, B e C): ");
    scanf("%d %d %d", &A, &B, &C);

    int maior, meio, menor;

    if (A >= B && A >= C) {
        maior = A;
        if (B >= C) {
            meio = B;
            menor = C;
        } else {
            meio = C;
            menor = B;
        }
    } else if (B >= A && B >= C) {
        maior = B;
        if (A >= C) {
            meio = A;
            menor = C;
        } else {
            meio = C;
            menor = A;
        }
    } else {
        maior = C;
        if (A >= B) {
            meio = A;
            menor = B;
        } else {
            meio = B;
            menor = A;
        }
    }

    printf("Valores em ordem descendente: %d, %d, %d\n", maior, meio, menor);

    return 0;
}
