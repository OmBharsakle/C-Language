#include<stdio.h>

int main() {
    int a, b;

    // Input A/B value
    printf("Enter The Value Of A : ");
    scanf("%d", &a); // Input: 5
    
    printf("Enter The Value Of B : ");
    scanf("%d", &b); // Input: 10

    // Swap the values of a and b without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Print Values
    printf("A Value Of : %d\n", a); // Output: 10
    printf("B Value Of : %d", b);   // Output: 5

    return 0;
}
