#include <stdio.h>

int main() {
    int A, B, C, D;

    printf("Digite quatro valores (A, B, C e D): ");
    scanf("%d %d %d %d", &A, &B, &C, &D);

    int maior = A, menor = A;

    if (B > maior) maior = B;
    if (C > maior) maior = C;
    if (D > maior) maior = D;

    if (B < menor) menor = B;
    if (C < menor) menor = C;
    if (D < menor) menor = D;

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
