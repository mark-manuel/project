#include <stdio.h>

int main() {
    int num1, num5, sum, num3, num4;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the fifth number: ");
    scanf("%d", &num5);
    
    sum = num1 + num5;
    
    printf("The sum of %d and %d is %d.", num1, num5, sum);
    
    return 0;
}
