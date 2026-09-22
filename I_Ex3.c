#include <stdio.h>

int main(void)
{
    int x;
    int y;
    int temp;

    printf("Entrez X : ");
    scanf("%d", &x);
    printf("Entrez Y : ");
    scanf("%d", &y);

    temp = x;
    x = y;
    y = temp;

    printf("X = %d\n", x);
    printf("Y = %d\n", y);

    return 0;
}
