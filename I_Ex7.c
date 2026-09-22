#include <stdio.h>

int main(void)
{
    const double PRIX_M1 = 15.0;
    const double PRIX_M2 = 20.0;
    const double PRIX_M3 = 25.0;

    int n1, n2, n3;
    double total;

    printf("Nombre de menus a 15 euros : ");
    scanf("%d", &n1);
    printf("Nombre de menus a 20 euros : ");
    scanf("%d", &n2);
    printf("Nombre de menus a 25 euros : ");
    scanf("%d", &n3);

    total = (n1 * PRIX_M1) + (n2 * PRIX_M2) + (n3 * PRIX_M3);
    printf("Prix total : %.2f euros\n", total);

    return 0;
}
