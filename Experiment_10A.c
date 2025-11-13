/* NAME: Tathagat Gautam Vetale
   CLASS:CIVIL
   DIV:B
   ROLL NO:20 
   UIN:251C025*/
#include <stdio.h>

int main() {
    int a, b, sum;
    int *p1, *p2;   // pointer variables

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Assign addresses of variables to pointers
    p1 = &a;
    p2 = &b;

    // Add the values pointed to by p1 and p2
    sum = *p1 + *p2;

    printf("Sum = %d\n", sum);

    return 0;
}
