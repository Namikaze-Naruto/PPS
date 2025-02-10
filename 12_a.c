#include <stdio.h>

// Define the structure
struct student {
    int Roll;
    char Name[20];
    char Dept[20];
    char Course[20];
    int year;
} S[5];

int main() {
    for (int i = 0; i < 5; i++) {
        printf("Enter Roll number: ");
        scanf("%d", &S[i].Roll);

        // Clear the input buffer
        while (getchar() != '\n');

        printf("Enter Name: ");
        fgets(S[i].Name, 20, stdin);

        printf("Enter the Department: ");
        fgets(S[i].Dept, 20, stdin);

        printf("Enter the Course: ");
        fgets(S[i].Course, 20, stdin);

        printf("Enter the year: ");
        scanf("%d", &S[i].year);

        // Clear the input buffer
        while (getchar() != '\n');
    }

    printf("\nElements are:\n");
    for (int i = 0; i < 5; i++) {
        printf("Roll number: %d\n", S[i].Roll);
        printf("Name: %s", S[i].Name);
        printf("Department: %s", S[i].Dept);
        printf("Course: %s", S[i].Course);
        printf("Year: %d\n", S[i].year);
    }

    return 0;
}
