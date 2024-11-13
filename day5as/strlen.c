#include <stdio.h>
#include<string.h>

int strLen(const char* ptr) {
    int length = 0;
    while (*ptr != '\0') {
        length++;
        ptr++;
    }
    return length;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Length of string: %d\n", strLen(str));
    return 0;
}
