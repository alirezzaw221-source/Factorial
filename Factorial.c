#include <stdio.h>
// for n == k || k = 0 -> (n k) = 1
// (n k) = (n-1 k-1) + (n-1 k)

int fact(int n, int k)
{
    if (n == k || k == 0) return 1;
    return fact(n-1, k-1) + fact(n-1, k);
}

int main(void)
{
    int n, k;
    printf("(n k): ");
    scanf("%d %d", &n, &k);

    printf("\nResult: %d\n\n", fact(n, k));
    return 0;
}