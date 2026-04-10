#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30, d = 40;
    int sum;

    sum = a + b + c + d;

    printf("Sum of four numbers = %d\n", sum);

    // Extra loop for Jenkins logs
    for(int i = 1; i <= 5; i++) {
        printf("Number: %d\n", i);
    }

    return 0;
}
