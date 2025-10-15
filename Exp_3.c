/*NAME: Tathagat GAUTAM VETALE
CLASS: CIVIL BRANCH
DIVISION: B
UIN NO: 251C025 
*/
#include <stdio.h>

int main()
{
    char op;
    int num1, num2, result;
    start :
    
    

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    if (op == 'e')
    {
        return 0;  // Exit the program immediately
    }
    printf("ENTER THE NUMBER : ");
    scanf("%d", &num1);

    printf("ENTER THE NUMBER : ");
    scanf("%d", &num2);

    switch (op)
    {
    case '+':
        result = num1 + num2;
        printf("%.2d + %.2d = %.2d\n", num1, num2, result);
        goto start;
        break;

    case '-':
        result = num1 - num2;
        printf("%.2d - %.2d = %.2d\n", num1, num2, result);
        goto start;
        break;

    case '*':
        result = num1 * num2;
        printf("%.2d * %.2d = %.2d\n", num1, num2, result);
        goto start;
        break;
        
    case '/':
        if (num2 != 0)
        {
            printf("%.2d / %.2d = %.2f\n", num1, num2, (float)num1 / num2);
        }
        else
        {
            printf("Error! Division by zero is not allowed.\n");
        }
        goto start;
        break;
}
       return 0;
}
