#include <stdio.h>

int main() {
    int a[10], n, i, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &position);

    for (i = position - 1; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;

    printf("Array after deletion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
