#include <stdio.h>

int main() {
    char str[] = "abc123!@#456";
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            str[j++] = str[i];  // keep digit
        }
    }
    str[j] = '\0';

    printf("Numeric String: %s\n", str);
    return 0;
}