/* NAME: TATHAGAT GAUTAM VETALE
UIN :- 251C025
CLASS:- CIVIL
ROLL NO:- 20
DIV:- B */
#include <stdio.h>

typedef struct { int id; char name[20]; float sal; } Emp;

int main() {
    FILE *f; Emp e; int ch, s;

    while (1) {
        printf("\n1.Add  2.Show  3.Search  4.Exit : ");
        scanf("%d", &ch);

        if (ch == 1) {
            f = fopen("employee.txt","ab");
            printf("ID Name Salary: ");
            scanf("%d %s %f", &e.id, e.name, &e.sal);
            fwrite(&e, sizeof(e), 1, f);
            fclose(f);
        }

        else if (ch == 2) {
            f = fopen("employee.txt","rb");
            while (fread(&e, sizeof(e), 1, f))
                printf("%d %s %.2f\n", e.id, e.name, e.sal);
            fclose(f);
        }

        else if (ch == 3) {
            printf("Enter ID: "); scanf("%d", &s);
            f = fopen("employee.txt","rb");
            int found = 0;
            while (fread(&e, sizeof(e), 1, f))
                if (e.id == s) printf("Found: %d %s %.2f\n",
                        e.id, e.name, e.sal), found = 1;
            if (!found) printf("Not found\n");
            fclose(f);
        }

        else break;
    }
}
