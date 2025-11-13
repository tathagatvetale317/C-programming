/* NAME: Tathagat Gautam Vetale
   DIV: B
   CLASS:CIVIL
   ROLL NO:20
   UIN:251C025*/
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *ptr;
    int i;
    
     ptr = arr + size - 1;
     
    printf("Original array elements: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Array elements in reverse order: ");
    for (i = 0; i < size; i++) {
      
        printf("%d ", *ptr);
        ptr--;
    }
    printf("\n");

    return 0;
}
