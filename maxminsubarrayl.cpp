#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    long long a[n];
    for (int i = 0; i < n; i++) scanf("%lld", &a[i]);

    long long sum = 0;
    for (int i = 0; i < k; i++) sum += a[i];

    long long maxSum = sum, minSum = sum;

    for (int i = k; i < n; i++) {
        sum += a[i];
        sum -= a[i - k];

        if (sum > maxSum) maxSum = sum;
        if (sum < minSum) minSum = sum;
    }

    printf("%lld %lld\n", maxSum, minSum);
    return 0;
}
