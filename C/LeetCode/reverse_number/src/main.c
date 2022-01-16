#include <stdio.h>


int reverse_number(int n);


int main() {
    printf("non-reversed: %d\n", 1234);
    printf("reversed: %d\n", reverse_number(1234));

    return 0;
}

int reverse_number(int n) {
    int out = 0;
    int last_digit = 0;
    while (n > 0) {
        last_digit = n % 10;
        printf("last_digit: %d\n", last_digit);
        out = (out * 10) + last_digit;
        n /= 10;
    }
    
    if(n == 0)
    {
        return 1;
        exit(1);
    }
    return out;
}
