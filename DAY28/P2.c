#include <stdio.h>

int main()
{
    int accNo, choice;
    float balance = 0, amount;
    char name[50];

    while (1)
    {
        printf("\n===== Bank Account System =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Account Number: ");
                scanf("%d", &accNo);
                printf("Enter Account Holder Name: ");
                scanf("%s", name);
                balance = 0;
                printf("Account Created Successfully!\n");
                break;

            case 2:
                printf("Enter Deposit Amount: ");
                scanf("%f", &amount);
                balance = balance + amount;
                printf("Money Deposited Successfully!\n");
                break;

            case 3:
                printf("Enter Withdraw Amount: ");
                scanf("%f", &amount);
                if (amount <= balance)
                {
                    balance = balance - amount;
                    printf("Money Withdrawn Successfully!\n");
                }
                else
                {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 4:
                printf("\nAccount Number : %d\n", accNo);
                printf("Account Holder : %s\n", name);
                printf("Current Balance: %.2f\n", balance);
                break;

            case 5:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}