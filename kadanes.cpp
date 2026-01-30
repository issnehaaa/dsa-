#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long x, curr, best;
    scanf("%lld", &x);
    curr = best = x;

    for (int i = 1; i < n; i++) {
        scanf("%lld", &x);

        if (curr + x > x) curr = curr + x;
        else curr = x;

        if (curr > best) best = curr;
    }

    printf("%lld\n", best);
    return 0;
}
