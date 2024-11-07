#include <stdio.h>

int sum_of_digits(int num) {
    if (num == 0) {
        return 0;
    } else {
        return num % 10 + sum_of_digits(num / 10);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = sum_of_digits(num);
    printf("Sum of digits: %d\n", result);
    return 0;
}