#include <stdio.h>

int main()
{
    int n, i;
    int id[100];
    char name[100][50];
    float salary[100];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &id[i]);

        printf("Enter Employee Name: ");
        scanf("%s", name[i]);

        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }

    // Display employee details
    printf("\n----- Employee Records -----\n");
    printf("ID\tName\tSalary\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%.2f\n", id[i], name[i], salary[i]);
    }

    return 0;
}