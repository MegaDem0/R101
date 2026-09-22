#include <stdio.h>

int main(void)
{
    int jour;
    int mois;
    int joursDansMois;

    printf("Entrez le jour : ");   scanf("%d", &jour);
    printf("Entrez le mois : ");   scanf("%d", &mois);

    if (mois < 1 || mois > 12) {
        printf("Erreur : mois invalide.\n");
        return 1;
    }

    if (mois == 2) {
        joursDansMois = 28;
    } else if (mois == 4 || mois == 6 || mois == 9 || mois == 11) {
        joursDansMois = 30;
    } else {
        joursDansMois = 31;
    }

    if (jour < 1 || jour > joursDansMois) {
        printf("Erreur : jour invalide.\n");
        return 1;
    }

    jour = jour + 1;

    if (jour > joursDansMois) {
        jour = 1;
        mois = mois + 1;
    }

    if (mois > 12) {
        printf("Lendemain : 1 / 1 / 2026\n");
    } else {
        printf("Lendemain : %d / %d / 2025\n", jour, mois);
    }

    return 0;
}
