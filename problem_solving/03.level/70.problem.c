# include <stdlib.h>
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int* res = (int*)malloc(2 * numsSize * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        res[i] = nums[i];
        res[i + numsSize] = nums[i];
    }
 
    *returnSize = 2 * numsSize;
    return res;

}