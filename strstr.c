#include <stdio.h>
#include <string.h>

int main() {
    char haystack[100], needle[50];
    printf("Enter the main string: ");
    fgets(haystack, sizeof(haystack), stdin);
    haystack[strcspn(haystack, "\n")] = '\0';
    printf("Enter the substring: ");
    fgets(needle, sizeof(needle), stdin);
    needle[strcspn(needle, "\n")] = '\0';
    char *result = strstr(haystack, needle);
    if (result) {
        printf("Substring found at: %s\n", result);
    } else {
        printf("Substring not found\n");
    }
    return 0;
}
