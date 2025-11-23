/* NAME: TATHAGAT GAUTAM VETALE
UIN :- 251C025
CLASS:- CIVIL
ROLL NO:- 20
DIV:- B */
#include <stdio.h>

typedef struct {
    int id;
    char name[20];
    float sal;
} Emp;

int main() {
    FILE *f;
    Emp e;
    int ch, s;

    while (1) {
        printf("\n1.Add  2.Show  3.Search  4.Exit : ");
        scanf("%d", &ch);

        // Clear input buffer
        while (getchar() != '\n');

        if (ch == 1) {
            f = fopen("employee.txt", "a");
            if (!f) {
                printf("Error opening file!\n");
                continue;
            }

            printf("ID Name Salary: ");
            scanf("%d %s %f", &e.id, e.name, &e.sal);

            fprintf(f, "%d %s %.2f\n", e.id, e.name, e.sal);
            fclose(f);
        }

        else if (ch == 2) {
            f = fopen("employee.txt", "r");
            if (!f) {
                printf("No records to display.\n");
                continue;
            }

            printf("\nAll Employees:\n");
            while (fscanf(f, "%d %s %f", &e.id, e.name, &e.sal) == 3) {
                printf("%d %s %.2f\n", e.id, e.name, e.sal);
            }

            fclose(f);
        }

        else if (ch == 3) {
            printf("Enter ID to search: ");
            scanf("%d", &s);

            f = fopen("employee.txt", "r");
            if (!f) {
                printf("No records found!\n");
                continue;
            }

            int found = 0;
            while (fscanf(f, "%d %s %f", &e.id, e.name, &e.sal) == 3) {
                if (e.id == s) {
                    printf("Found: %d %s %.2f\n", e.id, e.name, e.sal);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Not found!\n");

            fclose(f);
        }

        else if (ch == 4) {
            break;
        }

        else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
