#include <stdio.h>

int main(void)
{
    double montant;
    double montantFinal;
    int membre;
    int codeValide;

    printf("Montant total : ");
    scanf("%lf", &montant);
    printf("Membre ? (1 = oui, 0 = non) : ");
    scanf("%d", &membre);
    printf("Code de reduction valide ? (1 = oui, 0 = non) : ");
    scanf("%d", &codeValide);

    if (membre == 1) {
        montantFinal = montant * 0.85;
    } else if (codeValide == 1) {
        montantFinal = montant * 0.90;
    } else if (montant > 100.0) {
        montantFinal = montant * 0.95;
    } else {
        montantFinal = montant;
    }

    printf("Montant final : %.2f euros\n", montantFinal);

    return 0;
}
