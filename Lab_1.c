#include <stdio.h>

int main(void) {
    int n = 0;
    int i = 0;
    int s = 0;

    printf("Please enter value for N\n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            s = s + i;
            printf("Current value i=%d S=%d\n", i, s);
        }
    }

    printf("Final result suma is S=%d", s);
    return 0;
}
