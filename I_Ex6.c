#include <stdio.h>

int main(void)
{
    int x;
    int y;
    int z;
    int temp;

    printf("Entrez X : ");
    scanf("%d", &x);
    printf("Entrez Y : ");
    scanf("%d", &y);
    printf("Entrez Z : ");
    scanf("%d", &z);

    temp = x;
    x = y;
    y = z;
    z = temp;

    printf("X = %d\n", x);
    printf("Y = %d\n", y);
    printf("Z = %d\n", z);

    return 0;
}
