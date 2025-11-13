/* NAME: Tathagat Gautam Vetale
   CLASS:CIVIL
   DIV:B
   ROLL NO:20 
   UIN:251C025*/
#include <stdio.h>

int main() {
    double num1, num2, sum;
    double *p1, *p2;

    p1 = &num1;
    p2 = &num2;
    
    printf("Enter two numbers: ");
    scanf("%lf %lf", p1, p2);

    sum = *p1 + *p2;

    printf("The sum is: %f\n", sum);

    return 0;
}
