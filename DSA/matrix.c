#include <stdio.h>
#include <time.h>

// Exponential function (2^n type work)
long long expoWork(int n) {
    if (n <= 0)
        return 1;

    return expoWork(n - 1) + expoWork(n - 1);
}

int main() {

    clock_t start, end;
    double time_taken;
    

    printf("n\tTime Taken (seconds)\n");
    printf("-----------------------------\n");

    // n ko dheere dheere badhayenge
    for (int n = 99; n <= 100; n++) {

        start = clock();

        expoWork(n);

        end = clock();

        time_taken = (double)(end - start) / CLOCKS_PER_SEC;

        printf("%d\t%f\n", n, time_taken);
    }

    return 0;
}
