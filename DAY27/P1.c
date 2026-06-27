#include <stdio.h>

int main() {
    int rollNo;
    char name[50];
    float marks;

    printf("=== Student Record Management System ===\n\n");

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Marks: ");
    scanf("%f", &marks);

    printf("\n=== Student Record ===\n");
    printf("Roll Number : %d\n", rollNo);
    printf("Name        : %s\n", name);
    printf("Marks       : %.2f\n", marks);

    if (marks >= 90)
        printf("Grade       : A\n");
    else if (marks >= 75)
        printf("Grade       : B\n");
    else if (marks >= 50)
        printf("Grade       : C\n");
    else
        printf("Grade       : Fail\n");

    return 0;
}