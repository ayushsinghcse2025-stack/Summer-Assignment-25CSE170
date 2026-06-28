#include <stdio.h>

int main()
{
    int totalSeats = 10;
    int booked = 0, choice, tickets;

    while (1)
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. Check Available Tickets\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter number of tickets to book: ");
                scanf("%d", &tickets);

                if (tickets <= (totalSeats - booked))
                {
                    booked += tickets;
                    printf("Ticket Booked Successfully!\n");
                }
                else
                {
                    printf("Not enough tickets available!\n");
                }
                break;

            case 2:
                printf("Enter number of tickets to cancel: ");
                scanf("%d", &tickets);

                if (tickets <= booked)
                {
                    booked -= tickets;
                    printf("Ticket Cancelled Successfully!\n");
                }
                else
                {
                    printf("Invalid number of tickets!\n");
                }
                break;

            case 3:
                printf("\nTotal Seats     : %d\n", totalSeats);
                printf("Booked Tickets  : %d\n", booked);
                printf("Available Seats : %d\n", totalSeats - booked);
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