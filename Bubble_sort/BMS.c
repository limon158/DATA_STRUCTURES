#include <stdio.h>

// Function for create account.
void createAccount(int *Ac)
{
    printf("Enter Account NO: ");
    scanf("%d", Ac);
}
//Function for deposit balance.
void deposit(int *balance)
{
    int amount;
    printf("\nEnter amount you want ro deposit : $ ");
    scanf("%d", &amount);
    *balance = *balance + amount;
}
//Function to check balance.
void checkBalance(int balance)
{
    printf("\nYour Balance : $ %d ", balance);
}
//Function to withdraw balance.
void withdraw(int *balance)
{
    int amount;
    printf("Enter amount to withdraw : $ ");
    scanf("%d", &amount);
    if (amount > *balance)
    {
        printf("\nSorry! You have not sufficient balance.\n");
    }
    else
    {
        *balance = *balance - amount;
    }
}
// Main Function.
int main()
{
    printf("\n*******BANK MANAGEMENT SYSTEM*******\n\n");
    //Variables for storing data.
    int balance = 0;
    int accountNumber;
    int keyword;
    int flag = 0;

    for (;;)
    {
        printf("\n1. Create Account. \n2. Deposit. \n3. Check Balance. \n4. Withdraw. \n5. Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &keyword);

        switch (keyword)
        {
        case 1:
            createAccount(&accountNumber);
            printf("\nYOUR ACC. NO : %d \n", accountNumber);
            break;
        case 2:
            deposit(&balance);
            break;
        case 3:
            checkBalance(balance);
            break;
        case 4:
            withdraw(&balance);
            break;
        case 5:
            printf("\nExiting...\n");
            break;
        default:
            printf("\nInvalid choice.\n");
        }

        printf("\n1.Continue \n2.Exit \nEnter : ");
        scanf("%d", &flag);
        if (flag != 1)
        {
            return 0;
        }
    }
}