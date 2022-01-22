#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *numbers, int numbersSize, int target, int* returnSize);

int main() {
    int test_len;
    int test1[] = {2, 7, 11, 15};
    int test2[] = {2,3,4};
    int test3[] = {-1, 0};
    int *test1_out = twoSum(test1, 4, 9, &test_len);
    int *test2_out = twoSum(test2, 3, 6, &test_len);
    int *test3_out = twoSum(test3, 2, -1, &test_len);
    printf("indices: (%d, %d)\n", test1_out[0], test1_out[1]);
    printf("indices: (%d, %d)\n", test2_out[0], test2_out[1]);
    printf("indices: (%d, %d)\n", test3_out[0], test3_out[1]);

    return 0;
}

int *twoSum(int *numbers, int numbersSize, int target, int* returnSize) {
    int *out = malloc(2 * sizeof(int));
    *returnSize = 2;
    int l, r;
    l = 0; r = numbersSize - 1;
    while (l < r) {
        if (numbers[l] + numbers[r] > target) {
            r--;
        } else if (numbers[l] + numbers[r] < target) {
            l++;
        } else {
            out[0] = l + 1;
            out[1] = r + 1;
            return out;
        }
    }
    return out;
}
