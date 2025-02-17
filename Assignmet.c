#include <stdio.h>

int main() {
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = number + 10;

    printf("The result of adding 10 to your number is: %d\n", result);

    return 0;
}

