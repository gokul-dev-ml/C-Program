#include <stdio.h>

int sumDigits(int n) {
    if (n == 0) {
        printf("BASE CASE: sumDigits(0) = 0\n");
        return 0;
    }
    else {
        int digit = n % 10;
        printf("WINDING: sumDigits(%d) - digit = %d\n", n, digit);
        
        int recursive_result = sumDigits(n / 10);
        
        printf("UNWINDING: sumDigits(%d) - %d + %d = %d\n", 
               n, digit, recursive_result, digit + recursive_result);
        
        return digit + recursive_result;
    }
}

int factorial(int x) {
    if (x == 0) {
        printf("BASE CASE: factorial(0) = 1\n");
        return 1;
    }
    else {
        printf("WINDING: factorial(%d) - storing %d\n", x, x);
        
        int recursive_result = factorial(x - 1);
        
        printf("UNWINDING: factorial(%d) - %d × %d = %d\n", 
               x, x, recursive_result, x * recursive_result);
        
        return x * recursive_result;
    }
}

int main() {
    printf("=== sumDigits(1234) ===\n");
    printf("Result: %d\n\n", sumDigits(1234));
    
    printf("=== factorial(5) ===\n");
    printf("Result: %d\n", factorial(5));
    
    return 0;
}
