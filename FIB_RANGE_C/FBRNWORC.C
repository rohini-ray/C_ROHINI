#include <stdio.h>

int fib(int n);

int main() {
    int x = 20, y = 70;
    int i, k;

    for (i = 0; i <= y; i++) {
        k = fib(i);

        if (k >= x && k <= y)
            printf("%d ", k);
    }

    return 0;
}

int fib(int n) {
    int a = 0, b = 1, c, i;

    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;

    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}