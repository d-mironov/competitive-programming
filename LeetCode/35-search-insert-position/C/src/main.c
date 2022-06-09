#include <stdio.h>

int searchInsert(int *nums, int numsSize, int target);
int searchInsert_better(int* nums, int numsSize, int target);

int main() {
    int test1[] = {1, 3, 5, 6};
    int test2[] = {1};
    printf("searchInsert<test1, 2>: %d\n", searchInsert_better(test1, 4, 7));
    printf("searchInsert<test1, 2>: %d\n", searchInsert_better(test1, 4, 5));
    printf("searchInsert<test1, 2>: %d\n", searchInsert_better(test1, 4, 2));
    printf("searchInsert<test1, 2>: %d\n", searchInsert_better(test1, 4, 0));

    printf("searchInsert<test2, 2>: %d\n", searchInsert(test2, 1, 2));
    return 0;
}

/**
 * 
 * @brief My solution - Not very smart or convenient 
 * 
 * @param nums 
 * @param numsSize 
 * @param target 
 * @return int 
 */
int searchInsert(int *nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;
    int i = 0;
    if (numsSize == 1) {
        return (nums[0] > target) ? (0) : ((nums[0] == target) ? (0) : (1));
    }
    while (left <= right) {
        i = left + (right - left) / 2;
        if (nums[i] == target) {
            return i;
        }   
        if (nums[i] < target) {
            left = i + 1;
        } else {
            right = i - 1;
        }
        if (left >= right) {
            if (nums[left] < target) {
                return (left == (numsSize-1)) ? (numsSize) : (left + 1);
            } else {
                return left;
            }
        }
    }
    return -1;
}

/**
 * @brief Someones solution - Much better, faster and smarter
 * 
 * @param nums 
 * @param numsSize 
 * @param target 
 * @return int 
 */
int searchInsert_better(int* nums, int numsSize, int target){
    
    int low = 0 ;
    int high = numsSize - 1;
    int mid;
    while(low <= high){
        mid = low + (high - low)/2;
        if(nums[mid] == target){
            return mid;
        }else if (nums[mid] < target){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return low;
}
