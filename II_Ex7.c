#include <stdio.h>

int main(void)
{
    int nombre;

    printf("Entrez un nombre entre 1 et 9999 : ");
    scanf("%d", &nombre);

    if (nombre < 1 || nombre > 9999) {
        printf("Erreur : nombre invalide.\n");
    } else if (nombre % 2 == 0 && nombre % 5 == 0) {
        printf("Divisible par 2 et par 5.\n");
    } else if (nombre % 2 == 0) {
        printf("Divisible par 2.\n");
    } else if (nombre % 5 == 0) {
        printf("Divisible par 5.\n");
    } else {
        printf("Non divisible par 2 ni par 5.\n");
    }

    return 0;
}
