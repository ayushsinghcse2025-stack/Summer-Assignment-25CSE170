#include <stdio.h>
#include <string.h>

int main()
{
    char name[10][30], phone[10][15], search[30];
    int n = 0, choice, i, found;

    while (1)
    {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (n < 10)
            {
                printf("Enter Name: ");
                scanf("%s", name[n]);

                printf("Enter Phone Number: ");
                scanf("%s", phone[n]);

                n++;
                printf("Contact Added Successfully!\n");
            }
            else
            {
                printf("Contact List is Full!\n");
            }
            break;

        case 2:
            if (n == 0)
            {
                printf("No Contacts Available!\n");
            }
            else
            {
                printf("\n--- Contact List ---\n");
                for (i = 0; i < n; i++)
                {
                    printf("Name : %s\n", name[i]);
                    printf("Phone: %s\n\n", phone[i]);
                }
            }
            break;

        case 3:
            printf("Enter Name to Search: ");
            scanf("%s", search);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (strcmp(name[i], search) == 0)
                {
                    printf("Contact Found!\n");
                    printf("Name : %s\n", name[i]);
                    printf("Phone: %s\n", phone[i]);
                    found = 1;
                    break;
                }
            }

            if (!found)
            {
                printf("Contact Not Found!\n");
            }
            break;

        case 4:
            printf("Thank You!\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}