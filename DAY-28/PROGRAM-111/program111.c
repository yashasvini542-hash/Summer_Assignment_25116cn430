#include <stdio.h>
int main()
{
    int totalSeats = 50;
    int choice, seats;

    while(1)
    {
        printf("\n----- Ticket Booking System -----\n");
        printf("1. Book Ticket\n");
        printf("2. Check Available Seats\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter Number of Seats: ");
                scanf("%d",&seats);

                if(seats<=totalSeats)
                {
                    totalSeats -= seats;
                    printf("Booking Successful!\n");
                }
                else
                {
                    printf("Seats Not Available!\n");
                }
                break;

            case 2:
                printf("Available Seats = %d\n",totalSeats);
                break;

            case 3:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}
