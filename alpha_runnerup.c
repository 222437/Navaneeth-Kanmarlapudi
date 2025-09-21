#include <stdio.h>
#include <string.h>
#include <ctype.h>

char secondHighestAlphabet(char str[]) {
    char max_char = 0;
    char second_max_char = 0;
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        char c = str[i];

        if (!isalpha(c))
            continue;

        c = tolower(c);

        if (c > max_char) {
            second_max_char = max_char;
            max_char = c;
        } else if (c > second_max_char && c != max_char) {
            second_max_char = c;
        }
    }

    return second_max_char;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin)
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';

    char result = secondHighestAlphabet(str);
     if (result != 0) {
        printf("Second highest alphabet in the string is '%c'\n", result);
    } else {
        printf("No second highest alphabet found.\n");
    }

    return 0;
}
