#include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    printf("Multiplication Table for %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        int result = n * i;
        printf("%d * %d = %d\n", n, i, result);
    }
    
    return 0;
}
