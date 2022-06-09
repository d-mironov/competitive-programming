#include <stdio.h>

int firstBadVersion(int n);

int main() {
    printf("Hello, World!\n");
    return 0;
}

int firstBadVersion(int n) {
    int left = 0;
    int right = n;
    int i = 0;
    int last = 1;
    while (left <= right) {
        i = left + (right - left) / 2;
        if (isBadVersion(i)) {
            if (!isBadVersion(i - 1)) {
                return i;
            }
            right = i - 1;
        } else {
            left = i + 1;
        }
    }
    return -1;
}
