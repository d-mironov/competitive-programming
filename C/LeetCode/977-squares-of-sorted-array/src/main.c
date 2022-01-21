#include <stdio.h>
#include <stdlib.h>

int *sortedSquares(int *nums, int numsSize, int *returnSize);
void print_arr(int *nums, int numsSize);

int main() {
    int test1[] = {-4, -1, 0, 3, 10};
    int test1_out_size = 0;
    int *test1_out = sortedSquares(test1, 5, &test1_out_size);
    print_arr(test1_out, test1_out_size);

    int test2[] = {-5, -3, -2, -1};
    int test2_out_size = 0;
    int *test2_out = sortedSquares(test2, 4, &test2_out_size);
    print_arr(test2_out, test2_out_size);

    return 0;
}


int *sortedSquares(int *nums, int numsSize, int *returnSize) {
    int *out = malloc(numsSize * sizeof(int));
    int i = 0;
    int j = numsSize - 1;
    int end = numsSize - 1;
    int s_1 = 0;
    int s_2 = 0;
    while (i <= j) {
        s_1 = nums[i]*nums[i]; 
        s_2 = nums[j]*nums[j];
        if (s_2 > s_1) {
            out[end--] = s_2;
            j--;
        } else {
            out[end--] = s_1;
            i++;
        }
    }
    *returnSize = numsSize;
    return out;
}

void print_arr(int *nums, int numsSize) {
    printf("|");
    for (int i = 0; i < numsSize; i++) {
        printf("%d|", nums[i]);
    }
    printf("\n");
}
