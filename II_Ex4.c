#include <stdio.h>

int main(void)
{
    int age;
    int membreEquipe;
    int certificatValide;

    printf("Age : ");
    scanf("%d", &age);
    printf("Membre d'une equipe ? (1 = oui, 0 = non) : ");
    scanf("%d", &membreEquipe);
    printf("Certificat medical valide ? (1 = oui, 0 = non) : ");
    scanf("%d", &certificatValide);

    if (age >= 16 && membreEquipe == 1 && certificatValide == 1) {
        printf("Le participant est eligible.\n");
    } else {
        printf("Le participant n'est pas eligible.\n");
    }

    return 0;
}
