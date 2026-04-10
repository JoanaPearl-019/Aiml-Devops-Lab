#include <stdio.h>

int main() {
    int num1, num2, num3, num4, sum;

    // Taking input
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // Calculating sum
    sum = num1 + num2 + num3 + num4;

    // Display result
    printf("Sum = %d\n", sum);

    return 0;
}
