#include <stdio.h>
#include <string.h>

int main() {
    char dest[200], src[100];
    printf("Enter the first string: ");
    fgets(dest, sizeof(dest), stdin);
    dest[strcspn(dest, "\n")] = '\0';
    printf("Enter the second string: ");
    fgets(src, sizeof(src), stdin);
    src[strcspn(src, "\n")] = '\0';
    strcat(dest, src);
    printf("Concatenated string: %s\n", dest);
    return 0;
}
