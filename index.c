#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct login {
    int choice;
    char name[50];
    char email[60];
    char password[60];
    bool flag;
    char login_email[50];
    char login_pass[50];
} log;

int main() {
    log l1;

    printf("1 : Register\n");
    printf("2 : Login\n");
    scanf("%d", &l1.choice);

    if (l1.choice == 1) {
        printf("Enter Your Name: ");
        scanf("%s", l1.name);

        printf("Enter Your Email: ");
        scanf("%s", l1.email);

        printf("Enter Your Password: ");
        scanf("%s", l1.password);

        printf("Enter Your Flag 0 or 1: ");
        scanf("%s", &l1.flag);

        if (l1.flag != true && l1.flag != false) {
            printf("Please Enter (0 or 1)\n");
        }

        printf("Please Enteryour data");

        printf("Enter Your Email: ");
        scanf("%s", l1.login_email);

        printf("Enter Your Password: ");
        scanf("%s", l1.login_pass);

        if (l1.flag == 1) {
            if (l1.login_email==l1.email) {
printf("login Successfully\n");
            } else {
                printf("Email Or Password Is Wrong\n");
            }
        } else {
            printf("error\n");
        }

    } else if (l1.choice == 2) {
        printf("Enter Your Email: ");
        scanf("%s", l1.login_email);

        printf("Enter Your Password: ");
        scanf("%s", l1.login_pass);

        if (l1.flag == 1) {
            if (l1.login_email==l1.email) {
                printf("User Logged Successfully\n");
            } else {
                printf("Email Or Password Is Wrong\n");
            }
        } else {
            printf("error\n");
        }
    }

    return 0;
}