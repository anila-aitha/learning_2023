#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    struct Student* students;
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    students = (struct Student*)malloc(n * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed. Exiting the program.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter the name: ");
        scanf("%s", students[i].name);

        printf("Enter the roll number: ");
        scanf("%d", &(students[i].rollNumber));

        printf("Enter the marks: ");
        scanf("%f", &(students[i].marks));
    }

    printf("\nStudent details:\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }

    free(students);

    return 0;
}