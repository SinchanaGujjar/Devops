#include <stdio.h>
int main() {
    int num, i, a = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num <= 1) {
        a = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                a = 0;
                break;
            }
        }
    }

    if (a)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
