#include <stdio.h>

struct User {
    char name[50];
   float balance;
};

void transferMoney(struct User *sender, struct User *receiver, float amount) {
   if (sender->balance >= amount) {
       sender->balance -= amount;
        receiver->balance += amount;
        printf("Transfer successful!\n");
    } else {
       printf("Insufficient balance.\n");
    }
}

int main() {
    struct User user1, user2;
    float amount;
    int choice;

    printf("Enter name and balance of user 1: ");
   scanf("%s %f", user1.name, &user1.balance);
    printf("Enter name and balance of user 2: ");
    scanf("%s %f", user2.name, &user2.balance);

    while (1) {
       printf("\n%s: %.2f  %s: %.2f\n", user1.name, user1.balance, user2.name, user2.balance);
        printf("1. %s transfers to %s\n2. %s transfers to %s\n3. Exit\n", user1.name, user2.name, user2.name, user1.name);
        scanf("%d", &choice);

        if (choice == 3) break;

        printf("Enter transfer amount: ");
        scanf("%f", &amount);

        if (choice == 1) transferMoney(&user1, &user2, amount);
       else if (choice == 2) transferMoney(&user2, &user1, amount);
       else printf("Invalid option.\n");
   }

    printf("\nFinal balances:\n%s: %.2f  %s: %.2f\n", user1.name, user1.balance, user2.name, user2.balance);
   return 0;
}

