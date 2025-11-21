#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 3, d = 4, x = 5, y = 6, z = 7;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n\n", z);

    // No. 1
    printf("1. -15\n\n");

    // No. 2
    printf("2. 8 + 17 = %d\n\n", 8 + 17);

    // No. 3
    printf("3. a = %d\n\n", a = b + 5);

    // No. 4
    printf("4. x = %d\n\n", x = ++y % 3);

    // No. 5
    printf("5. (x >= 0) || ((x %% 2) == 0) = %d\n\n", (x >= 0) || ((x % 2) == 0));

    // No. 6
    printf("6. 6 + (c = 3 + 8) - (d = 1 + 3) = %d\n\n", 6 + (c = 3 + 8) - (d = 1 + 3));

    // No. 7
    printf("7. x + (((y / z) * 10) / 2) = %d\n\n", x + (((y / z) * 10) / 2));

    // No. 8
    printf("8. (((x + y) / z) * 10) / 2 = %d\n\n", (((x + y) / z) * 10) / 2);

    // No. 9
    printf("9. x + y / z * 10 / 2 = %d\n\n", x + y / z * 10 / 2);

    // No. 10
    printf("10. x + ((y / z) * 10) / 2 = %d\n\n", x + ((y / z) * 10) / 2);

    return 0;
}
