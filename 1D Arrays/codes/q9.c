#include <stdio.h>

#define true 1
#define false 0

int main() {
    int nums[] = {2,3,1,1,4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int maxJump = 0;
    for (int i = 0; i < numsSize; i++) {
        if (i > maxJump) {
            printf("false\n");
            return 0;
        }
        maxJump = (i + nums[i] > maxJump) ? i + nums[i] : maxJump;
        if (maxJump >= numsSize - 1) {
            printf("true\n");
            return 0;
        }
    }
    printf("false\n");
    return 0;
}

