#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = n; i < n + 10; i++) {
        int triangular = (i * (i + 1)) / 2;
        printf("%d ", triangular);
    }

    return 0;
}
