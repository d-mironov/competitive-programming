#include <stdio.h>
#include <string.h>

void reverseString(char *s, int sSize);

int main() {
    char test1[] = "Hello World";
    reverseString(test1, strlen(test1));
    printf("Test 1 result: %s\n", test1);
    return 0;
}

void reverseString(char *s, int sSize) {
    int l, r, tmp;
    l = 0; r = sSize - 1;
    while (l < r) {
        tmp = s[l];
        s[l++] = s[r];
        s[r--] = tmp;
    }
}
