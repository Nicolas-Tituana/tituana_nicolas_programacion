#include <stdio.h>

int main() {
    int inicio, fin, incremento;

    printf("Ingrese el numero inicial: ");
    scanf("%d", inicio);

    printf("Ingrese el numero final: ");
    scanf("%d", &fin)

    printf("Ingrese el incremento: ");
    scanf("%d", &incremento);

    for (int i = inicio; i <= fin; i + incremento) {
        printf("%d\n", i)
    }

    return 0;
}