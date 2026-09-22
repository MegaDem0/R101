#include <stdio.h>

int main(void)
{
    double prixHT;
    double prixTTC;

    printf("Entrez le prix HT : ");
    scanf("%lf", &prixHT);

    prixTTC = prixHT * 1.20;
    printf("Prix TTC : %.2f euros\n", prixTTC);

    return 0;
}
