#include <stdio.h>

int main() {
    int n;
	int i;
	int j;
    int x;
	int a;
	int b;
	int y;

    printf("Enter the number: ");
    scanf("%d", &n);

    // Find the nearest smaller prime
    for (i = 1; i < n; i++) {
        for (j = 2; j <= n - i; j++) {
            if ((n - i) % j == 0) {
                break;
            }
        }
        if (j == n - i) {
            x = n - i;
            break;
        }
    }

    // Find the nearest larger prime
    for (a = 1; a < n; a++) {
        for (b = 2; b <= n + a; b++) {
            if ((n + a) % b == 0) {
                break;
            }
        }
        if (b == n + a) {
            y = n + a;
            break;
        }
    }

    // Determine and print the nearest prime number
    if (n - x > y - n) {
        printf("Nearest prime: %d\n", y);
    } 
	else if (n - x < y - n) {
        printf("Nearest prime: %d\n", x);
	}
	else {
		printf("Nearest prime: %d\n", y);
	}
    return 0;
}
