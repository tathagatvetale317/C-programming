/* NAME: TATHAGAT GAUTAM VETALE
UIN :- 251C025
CLASS:- CIVIL
ROLL NO:- 20
DIV:- B */

#include<stdio.h>

int factorialRecursive(int num)
{
    if(num<=1) 
    {
        return 1;
    }
    return num*factorialRecursive(num-1);
}
int main()
{
    int num;
    printf("\t\t\t***Recursive Factorial Function***\n\n");
    printf("Enter Number= ");
    scanf("%d",&num);
    printf("Factorial of %d is %d",num,factorialRecursive(num));
    return 0;
}
