/* NAME: Tathagat Gautam Vetale
   CLASS:CIVIL
   DIV:B
   ROLL NO:20 
   UIN:251C025*/
#include <stdio.h>
#include <string.h>
struct student_record {
    char name[50];
    int roll_number;
    float total_marks;
};

int main() {
    struct student_record students[5]; 
    int i;

 
    printf("Enter details for 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_number);
        printf("Enter total marks: ");
        scanf("%f", &students[i].total_marks);
    }

    struct student_record topper = students[0]; 
    for (i = 1; i < 5; i++) {
        if (students[i].total_marks > topper.total_marks) {
            topper = students[i];
        }
    }

    printf("\n--- Topper Information ---\n");
    printf("Name: %s\n", topper.name);
    printf("Roll Number: %d\n", topper.roll_number);
    printf("Total Marks: %.2f\n", topper.total_marks);

    return 0;
}
