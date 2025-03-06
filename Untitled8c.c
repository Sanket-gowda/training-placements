#include <stdio.h>

#define MAX_USERS 3


struct user {
    int id;
    char name[150];
    float balance;
};

int main() {
    struct user users[MAX_USERS];


    for (int i = 0; i < MAX_USERS; i++) {
        printf("\nEnter details of user %d:\n", i + 1);

        printf("Enter id: ");
        scanf("%d", &users[i].id);


        getchar();
        printf("Enter name: ");
        fgets(users[i].name, sizeof(users[i].name), stdin);


        printf("Enter Balance: ");
        scanf("%f", &users[i].balance);
    }


    printf("\nStored User Data:\n");
    for (int i = 0; i < MAX_USERS; i++) {

        users[i].name[strcspn(users[i].name, "\n")] = 0;

        printf("User %d -> ID: %d, Name: %s, Balance: %.2f\n",
               i + 1, users[i].id, users[i].name, users[i].balance);
    }

    return 0;
}
