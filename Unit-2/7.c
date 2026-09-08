#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        if (n % i == 0) {
            printf("Smallest divisor of %d = %d\n", n, i);
            break;
        }
    }

    return 0;
}
