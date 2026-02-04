//four divisors
int sumFourDivisors(int* nums, int numsSize) {
    int count, sum, ts = 0;
    for (int i = 0; i < numsSize; i++) {
        int n = nums[i];
        count = 0, sum = 0;
        for (int j = 1; j <= n; j++) {
            if (n % j == 0) {
                count++;
                sum += j;
            }
        }
        if (count == 4) {
            ts += sum;
        }
    }
    return ts;
}