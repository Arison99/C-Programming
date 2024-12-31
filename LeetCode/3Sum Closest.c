#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int threeSumClosest(int* nums, int numsSize, int target) {
    qsort(nums, numsSize, sizeof(int), compare);
    
    int closestSum = INT_MAX;
    int minDiff = INT_MAX;
    
    for (int i = 0; i < numsSize - 2; i++) {
        int left = i + 1;
        int right = numsSize - 1;
        
        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            int diff = abs(sum - target);
            
            if (diff < minDiff) {
                minDiff = diff;
                closestSum = sum;
            }
            
            if (sum < target) {
                left++;
            } else if (sum > target) {
                right--;
            } else {
                return sum; // Exact match found
            }
        }
    }
    
    return closestSum;
}

int main(int argc, char *argv[]) {
    int nums[] = {-1, 2, 1, -4};
    int target = 1;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    
    int result = threeSumClosest(nums, numsSize, target);
    printf("The sum that is closest to the target is %d.\n", result);
    
    return 0;
}