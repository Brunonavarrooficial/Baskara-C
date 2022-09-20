#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double A, B, C, X1, X2, Delta;
    printf("Coeficiente A: ");
    scanf("%lf", &A);
    printf("Coeficiente B: ");
    scanf("%lf", &B);
    printf("Coeficiente C: ");
    scanf("%lf", &C);

    Delta = B * B - 4 * A * C;

    if (A == 0 || Delta < 0) {
        printf("Esta Equacão Não Possui Raizes Reais\n");
    }
    else {
        X1 = (-B + sqrt(Delta)) / (2 * A);
        X2 = (-B - sqrt(Delta)) / (2 * A);
        printf("X1 = %.4lf\n", X1);
        printf("X2 = %.4lf\n", X2);
    }



    return 0;
}
