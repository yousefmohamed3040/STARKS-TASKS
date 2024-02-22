#include <stdio.h>
#include <string.h>

int findFirstOccurrence(const char *source, const char *search) {
    const char *ptr = strstr(source, search);
    if (ptr != NULL) {
        return ptr - source;
    } else {
        return -1;
    }
}

int main() {
    char source[100], search[100];
    printf("Enter source string: ");
    fgets(source, sizeof(source), stdin);
    source[strcspn(source, "\n")] = '\0';

    printf("Enter search string: ");
    fgets(search, sizeof(search), stdin);
    search[strcspn(search, "\n")] = '\0';

    int index = findFirstOccurrence(source, search);
    if (index != -1) {
        printf("First occurrence of '%s' at index: %d\n", search, index);
    } else {
        printf("No occurrence of '%s' found in '%s'\n", search, source);
    }

    return 0;
}
