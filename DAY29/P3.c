#include <stdio.h>

int main() {
    int totalSeats = 10;
    int bookedSeats, availableSeats;

    printf("=== Ticket Booking System ===\n");
    printf("Total Seats Available: %d\n", totalSeats);

    printf("Enter number of tickets to book: ");
    scanf("%d", &bookedSeats);

    if (bookedSeats <= totalSeats && bookedSeats > 0) {
        availableSeats = totalSeats - bookedSeats;

        printf("\nBooking Successful!\n");
        printf("Tickets Booked : %d\n", bookedSeats);
        printf("Remaining Seats: %d\n", availableSeats);
    }
    else if (bookedSeats > totalSeats) {
        printf("\nSorry! Only %d seats are available.\n", totalSeats);
    }
    else {
        printf("\nInvalid number of tickets!\n");
    }

    return 0;
}