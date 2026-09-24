#include <stdio.h>

int main(void) {
    char name[50];

    printf("Enter your name: ");
    if (scanf("%49s", name) != 1) {
        return 1;
    }

    printf("Hello %s!\n", name);
    printf("Welcome to the AWS Hands-on Event.\n");

    return 0;
}
