/* NAME: TATHAGAT GAUTAM VETALE
UIN :- 251C025
CLASS:- CIVIL
ROLL NO:- 20
DIV:- B */

#include <stdio.h>

int main() {
    char str[100];
    int i, length, flag = 0;
    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            flag = 1;
            break;
        }
    }
if (flag == 0)
    printf("The string is a palindrome.\n");
else
    printf("The string is not a palindrome.\n");
return 0;
}
