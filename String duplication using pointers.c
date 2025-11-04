#include <stdio.h>
#include <stdlib.h>
char* my_strdup(char *src) {
    char *p = src;
    int len = 0;
    while (*p++) len++;
    char *dup = (char*)malloc(len + 1);
    if (!dup) return NULL;
    char *q = dup;
    while (*src) {
        *q++ = *src++;
    }
    *q = '\0';
    return dup;
}
int main() {
    char str[] = "Hello World";
    char *copy = my_strdup(str);
    printf("Original: %s\n", str);
    printf("Duplicate: %s\n", copy);
    free(copy);
    return 0;
}
