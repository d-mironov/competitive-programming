#include <stdio.h>
#include <unistd.h>

int search(int *nums, int numsSize, int target);
int search_sample(int *nums, int numsSize, int target);

int main() {
    int arr[] = {1, 3, 4, 5, 6, 7};
    int test1[] = {1, 3};
    int test2[] = {5};
    int test3[] = {-1,0,3,5,9,12};
    printf("1 / 2 = %d\n", 1 / 2);
    printf("bin search: %d\n", search(arr, 6, 7));
    printf("bin search: %d\n", search(arr, 6, 2));

    printf("bin search (test1): %d\n", search(test1, 2, 3));
    printf("bin search (test1): %d\n", search(test1, 2, 1));
    printf("bin search (test1): %d\n", search(test1, 2, -1));
    printf("bin search (test1): %d\n", search(test1, 2, 5));

    printf("bin search (test3): %d\n", search(test3, 6, 13));
    return 0;
}

int search(int *nums, int numsSize, int target) {
    int lower = 0;
    int top = numsSize;
    while (lower <= top) {
        int i = lower + (top - lower) / 2;
        if (nums[i] == target) {
            return i;
        }
        if (nums[i] < target) {
            lower = i + 1;
        } else {
            top = i - 1;
        }
        
        //printf("lower: %d    top: %d\n", lower, top);
        //usleep(1000 * 200);
    }
    return -1;
}

int search_sample(int* nums, int numsSize, int target)
{
    int i,n;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]==target)
        {
            n=i;
            break;
        }
        else{
            n=-1;
        }
    }
    return n;
}
