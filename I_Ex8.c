#include <stdio.h>

int main(void)
{
    int secondesTotal;
    int heures;
    int minutes;
    int secondesRestantes;

    printf("Entrez une duree en secondes : ");
    scanf("%d", &secondesTotal);

    heures = secondesTotal / 3600;
    minutes = (secondesTotal % 3600) / 60;
    secondesRestantes = secondesTotal % 60;

    printf("%d h %d min %d s\n", heures, minutes, secondesRestantes);

    return 0;
}
