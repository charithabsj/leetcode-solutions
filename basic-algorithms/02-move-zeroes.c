#include <stdio.h>

void moveZeroes(int *nums, int numsSize) {
    int index = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[index++] = nums[i];
        }
    }

    while (index < numsSize) {
        nums[index++] = 0;
    }
}

int main(void) {
    int nums[] = {0, 1, 0, 3, 12};
    moveZeroes(nums, 5);

    for (int i = 0; i < 5; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    return 0;
}
