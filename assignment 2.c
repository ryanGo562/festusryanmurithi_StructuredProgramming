#include <stdio.h>
#include <stdlib.h>
#include <string.h>



float balance = 1000000;

int login() {
    char storedPIN[] = "1234";
    char enteredPIN[10];
    int attempts = 3;

    while (attempts > 0) {
        printf("Enter your PIN: ");
        scanf("%s", enteredPIN);

        if (strcmp(enteredPIN, storedPIN) == 0) {
            printf("Login successful!\n\n");
            return 1;
        } else {
            attempts--;
            printf("Incorrect PIN. Attempts left: %d\n", attempts);
        }
    }

    printf("Too many failed attempts. Access denied.\n");
    return 0;
}


void checkBalance() {
    printf("\nYour current balance is: KES %.2f\n\n", balance);
}


void deposit(float amount) {
    if (amount <= 0) {
        printf("Deposit amount must be greater than 0.\n\n");
        return;
    }
    balance += amount;
    printf("KES %.2f deposited successfully!\n", amount);
    checkBalance();
}

void withdraw(float amount) {
    if (amount <= 0) {
        printf("Withdrawal amount must be greater than 0.\n\n");
        return;
    }

    if (amount > balance) {
        printf("Insufficient balance! work harder\n\n");
        return;
    }

    balance -= amount;
    printf("KES %.2f withdrawn successfully!\n", amount);
    checkBalance();
}


void showMenu() {
    printf("===== ATM MENU =====\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("====================\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;
    float amount;

    if (!login()) {
        return 0;
    }

    while (1) {
        showMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance();
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                deposit(amount);
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                withdraw(amount);
                break;

            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n\n");
        }
    }

    return 0;
}



