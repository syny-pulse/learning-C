#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int digitCount[10] = {0};
    int len = strlen(s); // Calculate the length of the string once

    for (int i = 0; i < len; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';
            digitCount[digit]++;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", digitCount[i]);
    }

    return 0;
}
