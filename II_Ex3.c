#include <stdio.h>

int main(void)
{
    int x, y, z;
    int temp;

    printf("Entrez X : "); scanf("%d", &x);
    printf("Entrez Y : "); scanf("%d", &y);
    printf("Entrez Z : "); scanf("%d", &z);

    if (x > y) {
        temp = x; x = y; y = temp;
    }
    if (y > z) {
        temp = y; y = z; z = temp;
    }
    if (x > y) {
        temp = x; x = y; y = temp;
    }

    printf("Ordre croissant : %d %d %d\n", x, y, z);

    return 0;
}
