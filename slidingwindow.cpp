#include <stdio.h>

int main() {
    int n;
    long long target;
    scanf("%d %lld", &n, &target);

    long long a[n];
    for (int i = 0; i < n; i++) scanf("%lld", &a[i]);

    int l = 0;
    long long sum = 0;

    for (int r = 0; r < n; r++) {
        sum += a[r];

        while (sum > target && l <= r) {
            sum -= a[l];
            l++;
        }

        if (sum == target) {
            printf("%d %d\n", l, r);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
