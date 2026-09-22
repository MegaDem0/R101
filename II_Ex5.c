#include <stdio.h>

int main(void)
{
    double poids;
    double taille;
    double imc;

    printf("Poids en kg : ");
    scanf("%lf", &poids);
    printf("Taille en metres : ");
    scanf("%lf", &taille);

    imc = poids / (taille * taille);
    printf("IMC = %.2f\n", imc);

    if (imc < 18.5) {
        printf("Insuffisance ponderale\n");
    } else if (imc < 25.0) {
        printf("Corpulence normale\n");
    } else if (imc < 30.0) {
        printf("Surpoids\n");
    } else {
        printf("Obesite\n");
    }

    return 0;
}
