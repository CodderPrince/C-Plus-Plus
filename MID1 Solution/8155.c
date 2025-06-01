#include <stdio.h>

int main() {
    int n = 5; // Number of rows for the pattern

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print increasing numbers
        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }

        // Print decreasing numbers
        for (int j = 2; j <= i; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
yyy