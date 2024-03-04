#include <stdio.h>

int main() {
    int prev = 0;
    int current = 1;
    int next = prev + current;

    printf("Fibonacci numbers less than 33:\n");
    printf("%d\n", prev);

    while (next < 33) {
        printf("%d\n", next);
        prev = current;
        current = next;
        next = prev + current;
    }

    return 0;
}