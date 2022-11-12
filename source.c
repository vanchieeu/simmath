#include <stdio.h>

#define N  998244353

unsigned long long Solve(unsigned long long a, unsigned long long b, unsigned long long c) {
    a = a * (a + 1) / 2 % N;

    b = b * (b + 1) / 2 % N;

    c = c * (c + 1) / 2 % N;

    return ((a * b) % N * c) % N;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        unsigned long long a, b, c;
        scanf("%llu %llu %llu", &a, &b, &c);

        printf("%llu\n", Solve(a, b, c));
    }

    return 0;
}