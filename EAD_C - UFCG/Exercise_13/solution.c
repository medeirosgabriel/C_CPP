#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, sum = 0;
    printf("Type a number: ");
    scanf("%d", &n);
    for (int i = 1; i < 2*n; i+=2) {
        sum += i;
    }
    printf("Sum of the first %d prime numbers: %d", n, sum);
}
