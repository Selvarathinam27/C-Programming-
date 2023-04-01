#include <stdio.h>

struct BankAccount 
{
    int balance;
};

int main() {
    struct BankAccount account = {1000};

    printf("Bank balance: %d\n", account.balance);

    account.balance += 5000;
    printf("Deposit 5000: %d\n", account.balance);

    account.balance -= 2000;
    printf("Withdraw 2000: %d\n", account.balance);

    account.balance += 7000;
    printf("Deposit 7000: %d\n", account.balance);

    account.balance -= 5000;
    printf("Withdraw 5000: %d\n", account.balance);

    printf("Final Bank balance: %d\n", account.balance);

    return 0;
}
