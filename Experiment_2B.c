/*
Name:-Tathagat Gautam Vetale
UIN :-2510025
Class:-Civil
Div :-B
*/

#include <stdio.h>

int main() {
int start, end;
int sum = 0;

{
printf("Enter the starting number: ");
scanf("%d", &start);
}
{
printf("Enter the ending number: ");
scanf("%d", &end);
}
{
printf("odd numbers between %d and %d are:" , start, end);
}
for (int i = start; i <= end; i++) 
if (i % 2 != 0)
{
printf("%d", i);
sum += i;
}
printf("\nSum of odd numbers: %d\n", sum);
return 0;
}
