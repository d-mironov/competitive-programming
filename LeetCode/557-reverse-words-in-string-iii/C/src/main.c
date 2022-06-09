#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *reverseWords(char *s);
char *reverseWords_alt(char *s);

int main() {
    char test1[] = "Hello World";
    char test2[] = "Hello World";
    printf("Test 1 result: %s\n", reverseWords(test1));
    printf("Test 2 result: %s\n", reverseWords_alt(test2));
    return 0;
}

char *reverseWords(char *s) {
    size_t len = strlen(s);
    char *out = calloc(len-1, sizeof(char));
    if (out == NULL) {
        return NULL;
    }
    int r, l, tmp, last;
    r = 0;
    l = 0;
    while (r < len) {
        while (s[r] != ' ') {
            if (r >= len-1) {
                r++;
                break;
            }
            r++;
        }
        printf("r: %d\n",r);
        // Now we have the next whitespace
        last = r--;
        for (int i = l; i < last; i++,r--) {
            out[i] = s[r];
        }
        out[last] = s[last];
        r = last+1;
        l = r;
    }

    return out;
}
 
char *reverseWords_alt(char *s) {
    int len = strlen(s);
    char *out = malloc(len);
    int r, l, tmp, last;
    r = 0;
    l = 0;
    while (r < len) {
        while (s[r] != ' ') {
            if (r >= len-1) {
                r++;
                break;
            }
            r++;
        }
        last = r;
        r--;
        while (l < r) {
            tmp = s[l];
            s[l++] = s[r];
            s[r--] = tmp;
        }
        l = last + 1;
        r = last + 1;
        printf("r, l: (%d, %d)\n", r, l);
    }
    return s;
}
