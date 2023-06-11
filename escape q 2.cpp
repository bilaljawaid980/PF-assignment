#include <stdio.h>

int main() {
    printf("Testing escape sequences:\n");
    printf("Single quote: %c\'%c\n", 'A', '\'');
    printf("Double quote: %c\"%c\n", 'A', '\"');
    printf("Question mark: %c\?%c\n", 'A', '\?');
    printf("Backslash: %c\\%c\n", 'A', '\\');
    printf("Alarm or bell: %c\a%c\n", 'A', '\a');
    printf("Backspace: %c\b%c\n", 'A', '\b');
    printf("New line: %c\n%c\n", 'A', '\n');
    printf("Carriage return: %c\r%c\n", 'A', '\r');
    printf("Tab: %c\t%c\n", 'A', '\t');

    return 0;
}

