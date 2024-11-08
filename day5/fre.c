#include <stdio.h>

int findFrequency(int arr[], int n, int target) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++
        }
    }
    return count;
}

int main() {
    int n, target;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find its frequency: ");
    scanf("%d", &target);

    int frequency = findFrequency(arr, n, target);
    printf("The number %d appears %d times in the array.\n", target, frequency);

    return 0;
}
