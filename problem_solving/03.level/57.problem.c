//max of two product
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
       int max1 = 0, max2 = 0, digit;
    while (n > 0) {
        digit = n % 10;
        if (digit > max1) {
            max2 = max1;
            max1 = digit;
        } else if (digit > max2)
            max2 = digit;
        n /= 10;
    }
    printf("%d",max1*max2);
}