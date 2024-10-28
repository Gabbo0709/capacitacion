#include <stdio.h>

int main() {
    int n, i;
    float num, sum = 0.0, average;

    printf("Ingrese la cantidad de números: ");
    scanf("%d", &n);

    for(i = 1; i <= n; ++i) {
        printf("Ingrese el número %d: ", i);
        scanf("%f", &num);
        sum += num;
    }

    average = sum / n;
    printf("El promedio es: %.2f\n", average);

    return 0;
}