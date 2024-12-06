#include <stdio.h>

int main() {
    int n, sum = 0;

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Ensure the input is positive
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Compute the sum using a loop
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    // Print the result to the console
    printf("The sum of all integers from 1 to %d is %d\n", n, sum);

    return 0;
}
