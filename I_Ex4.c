#include <stdio.h>

int main(void)
{
    int x;
    int y;

    printf("Entrez X : ");
    scanf("%d", &x);
    printf("Entrez Y : ");
    scanf("%d", &y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("X = %d\n", x);
    printf("Y = %d\n", y);

    return 0;
}
