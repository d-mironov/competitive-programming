#include <stdio.h>

int num_identical_pairs(int *nums, int nums_size);

int main() {
    int arr[6] = {1,2,3,1,1,3};
    printf("nums: %d\n", num_identical_pairs(arr, 6));
    return 0;
}


int num_identical_pairs(int *nums, int nums_size) {
    int counter = 0;
    for (int i = 0; i < nums_size; i++) {
        for (int j = i+1; j < nums_size; j++) {
            counter += nums[i] == nums[j];
        }
    }
    return counter;
}
