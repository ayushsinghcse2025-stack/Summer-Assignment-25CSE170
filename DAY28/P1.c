#include <stdio.h>

int main()
{
    int bookId[10], choice, n = 0, searchId, i, found;

    while (1)
    {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (n < 10)
            {
                printf("Enter Book ID: ");
                scanf("%d", &bookId[n]);
                n++;
                printf("Book Added Successfully!\n");
            }
            else
            {
                printf("Library is Full!\n");
            }
            break;

        case 2:
            if (n == 0)
            {
                printf("No Books Available!\n");
            }
            else
            {
                printf("\nBook IDs in Library:\n");
                for (i = 0; i < n; i++)
                {
                    printf("%d\n", bookId[i]);
                }
            }
            break;

        case 3:
            if (n == 0)
            {
                printf("No Books Available!\n");
            }
            else
            {
                printf("Enter Book ID to Search: ");
                scanf("%d", &searchId);

                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (bookId[i] == searchId)
                    {
                        found = 1;
                        break;
                    }
                }

                if (found)
                    printf("Book Found!\n");
                else
                    printf("Book Not Found!\n");
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