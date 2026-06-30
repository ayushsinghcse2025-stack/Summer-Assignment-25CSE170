#include <stdio.h>

int main()
{
    char books[5][50] = {
        "C Programming",
        "Data Structures",
        "Python Basics",
        "Java Programming",
        "Computer Networks"
    };

    int choice;

    printf("===== MINI LIBRARY SYSTEM =====\n");
    printf("1. Show Books\n");
    printf("2. Borrow Book\n");
    printf("3. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("\nAvailable Books:\n");
            for(int i = 0; i < 5; i++)
            {
                printf("%d. %s\n", i + 1, books[i]);
            }
            break;

        case 2:
        {
            int bookNo;

            printf("\nAvailable Books:\n");
            for(int i = 0; i < 5; i++)
            {
                printf("%d. %s\n", i + 1, books[i]);
            }

            printf("\nEnter book number to borrow: ");
            scanf("%d", &bookNo);

            if(bookNo >= 1 && bookNo <= 5)
            {
                printf("You borrowed: %s\n", books[bookNo - 1]);
            }
            else
            {
                printf("Invalid book number!\n");
            }
            break;
        }

        case 3:
            printf("Thank you for using the library system.\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}